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

// int func(int a, int b){
// 	int ans = 0;
// 	while(b != 1){
// 		return b/a + func(b%a,a);
// 	}
// 	return 0;
// }

template< class Int >
Int func( Int m, Int n )
{	Int ans = 0;
    while( n )
    {
        ans += m/n;
        m %= n;
        m ^= n ^= m ^= n;
    }
    return ans;
}

int main(){
	ll a,b;
	cin >> a >> b;
	if ( b == 1)
		cout << a << endl;
	else if (a > b){
		ll ans = func(a,b);
		cout << ans << endl;
	}else{
		ll ans = func(a,b);
		cout << ans << endl;
	}


	return 0;
}

