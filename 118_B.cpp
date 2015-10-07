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

int n,t1,t2,k;


ll getVal(int a, int b){
	ll ans = a*t1/100*(100 - k);
	ans += t2*b;
	// cout << a << " " << b << " " << t1 << " " << t2 << " " << k;
	// cout << "ans " << ans << endl;
	return ans;
}


int main(){
	
	cin >> n >> t1 >> t2 >> k;
	int a,b;
	pair <ll, int > res[1010];
	ll ans = 0;
	rep(i,n){
		cin >> a >> b;
		ans = -max(getVal(a*100,b*100),getVal(b*100,a*100));
		res[i] = (mp(ans,i));
	}

	sort(res,res+n);

	rep(i,n){
		printf("%d %lld.%02lld\n",res[i].ss + 1,-res[i].ff/100, (-res[i].ff)%100);
	}

	return 0;
}