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

#define MOD 1000000007


ll powmod( long long b, long long p, ll m)
{
    ll r = 1;
    for( long long i = ( 1LL << 62 ); i; i >>= 1 )
    {
        r *= r; if( m > 0 ) r %= m;
        if( p & i ) { r *= b; if( m > 0 ) r %= m; }
    }
    return r;
}



int main(){
	ll n;
	cin >> n;
	if(n == 0){
		cout <<  1 << endl;
		return 0;
	}

	ll ans = powmod(2,n -1 ,MOD);
	ll ans2 = powmod(2,2*n -1 ,MOD);
	// ans = (((ans) * (ans + 1)%MOD)% MOD)/2;
	ans = (ans + ans2)%MOD;
	cout << ans << endl;

	return 0;
}