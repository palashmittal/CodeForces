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
	ll n,x;
	ll ans = 0;
	cin >> n >> x;
	int a[n + 1];
	rep(i,n)
		cin >> a[i];

	sort(a , a + n);
	// reverse(a, a+ n);
	for(int i = 0; i < n; i++){
		ans += 1LL*a[i]*x;
		x--;
		if(x == 0){
			x = 1;
		}
	}
	cout << ans << endl;
	return 0;
}
