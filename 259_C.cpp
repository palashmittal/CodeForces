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

double exp(int n,int i,int m)
{
	if(n==1)
	{
		return (double)(i)/m;
	}
	double ans=exp(n/2,i,m);
	if(n%2)
	{
		return (double)ans*ans*(i/(double)(m));
	}
	return ans*ans;
}

int main(){
	int m,n;
	cin >> m >> n;		
	double ans = m +0.0, diff;
	double sum = 0.0;
	rep(i,m){
		
		diff = exp(n,i,m);
		sum += diff;
	}

	ans -= sum;
	printf("%.8lf\n",ans);
	return 0;
}
