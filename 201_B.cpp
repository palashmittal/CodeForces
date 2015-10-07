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
	int n;
	cin >> n;
	int a[n];
	rep(i,n) cin >> a[i];
	int ans = 0;
	rep(i,n){
		if(a[i] == i)
			ans++;
	}
	if(ans == n){
		cout << ans << endl;
		return 0;
	}
	int flag = 0;
	rep(i,n){
		if(a[a[i]] == i && a[i] != i){
			flag = 1;
		}

	}
	if(flag) cout << ans + 2 << endl;
	else cout << ans + 1 << endl;

	return 0;
}
