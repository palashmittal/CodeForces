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
	ll n, m;
	cin >> n >> m;
	ll amax, amin;
	if(n == 1){
		amax = 0;
		amin = 0;
	}else if(m == 1){
		amin = amax = (n * (n - 1))/2;
	}else{
		ll a = n - (m - 1);
		amax = (a*(a-1))/2;

		a = n/m;
		ll b = n%m;
		amin = b*(a*(a+1))/2 + (m - b)*(a*(a-1))/2;
		
	}

	cout << min(amin,amax) << " " << max(amin,amax) << endl;

	return 0;
}
