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

map< pair<int,int> , double >pam;



double cal(int w, int b){

	if(w <= 0) return 0;
	if(b <= 0) return 1;

	pair <int,int> a = mp(w,b);
	if(pam.find(a) != pam.end()){
		return pam[a];
	}

	double ans1 = w * 1.0 / (w + b);
	double ans2 = b * 1.0 / (w + b);
	b--;
	ans2 *= b*1.0/(w+b);
	b--;

	if(ans2 > 1e-13){
		double black = cal(w,b-1) * (b*1.0/(w+b));
		double white = cal(w-1,b) * (w*1.0/(w+b));

		ans1 += ans2 * (black + white);
	}
	pam[a] = ans1;
	return ans1;
}


int main(){
	int w,b;
	cin >> w >> b;

	double ans = cal(w,b);
	printf("%.9lf\n",ans);

	return 0;
}
