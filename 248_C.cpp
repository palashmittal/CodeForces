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

	int x;
	// set<int> page; 
	vi a;
	a.pb(0);
	rep(i,m){
		cin >> x;
		a.pb(x);
		// page.insert(x);
	}
	vi b[n + 10];
	for(int i = 1; i <= m; i++){
		if(i != 1 && a[i - 1] != a[i]) b[a[i-1]].pb(a[i]);
		if(i != m && a[i + 1] != a[i]) b[a[i+1]].pb(a[i]);
	}

	ll ans = 0;
	ll sum = 0;

	for(int i = 1; i <= n; i++){
		if(!b[i].size()) continue;
		sort(b[i].begin(),b[i].end());
		int y = b[i][b[i].size() / 2];
		ll before = 0;
		ll after = 0;

		rep(j,b[i].size()){
			before += abs(i - b[i][j]);
			after += abs(y - b[i][j]);
		}
		ans = max(ans, before - after);
		sum += before;
	}

	cout << sum /2 - ans << endl;	

	return 0;
}