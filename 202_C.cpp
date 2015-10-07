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
	ll a[n + 1];
	ll sum = 0;
	ll max = -1;
	rep(i,n) {
		cin >> a[i];
		sum += a[i];
		if(max < a[i]){
			max = a[i];
		}

	}
	ll ans = sum/(n - 1);
	if(ans >= max){
		if(sum % (n - 1)){
			cout << ans + 1 << endl;
		}else cout << ans << endl;
	}else {
		// cout << "max" << endl;
		cout << max << endl;
	}

	return 0;
}
