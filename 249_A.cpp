#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector <int> vi;
typedef pair <int,int> pii;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define sz(a) (int)a.size()
#define all(c) c.begin(), c.end()
#define rep(i, n) for(int i = 0; i < (n); i++)
#define rept(i, a, b) for(int i = (a); i < (b); i++)
#define fill(a, v) memset(a, v, sizeof(a))
#define foreach(c, it) for(__typeof(c.begin()) it = c.begin(); it != c.end(); ++it)


int main(){
	int n,m;
	cin >> n >> m;
	int a[n+1];
	rep(i,n){
		cin >> a[i];
	}
	int ans = 0;
	int slot = 0;
	for(int i = 0; i < n;){
		slot = 0;
		do{
			slot += a[i];
			
			i++;
			// cout << i << endl;
		}while(slot + a[i] <= m && i <= n);
		ans++;
		// cout << "ans " << ans << endl;
	}
	cout << ans  << endl;
	return 0;
}