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

int gcd(int a, int b){return (b == 0 ? a: gcd(b,a%b));}


int main(){
	int n;
	cin >> n;
	int x,y,max = -1;
	cin >> x;
	max = x;
	rep(i,n - 1){
		cin >> y;
		if(y > max)
			max = y;
		x = gcd(x,y);
	}
	// cout << x << endl;
	// cout << max << endl;
	int ans = max/x - n;
	if(ans&1)cout << "Alice" << endl;
	else cout << "Bob" << endl;

	return 0;
}
