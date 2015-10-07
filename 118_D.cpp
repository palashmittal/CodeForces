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
	int s,a,b,c;
	cin >> s >> a >> b >> c;

	double sum = a + b + c;
	if(a == 0 && b == 0 && c == 0){
		printf("0 0 0\n");
		return 0;
	}
	double x = s/sum * a;
	double y = s/sum * b;
	double z = s/sum * c;

	printf("%.10lf %.10lf %.10lf\n",x,y,z);
	// printf("%.10lf",x+y+z);

	return 0;
}