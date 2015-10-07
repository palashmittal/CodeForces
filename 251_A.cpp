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
	int n,d;
	cin >> n >> d;
	int a[n + 1];
	int sum = 0;
	rep(i,n){
		cin >> a[i];
		sum += a[i];
	}

	sum += 10*(n - 1);

	if(sum > d){
		cout << -1 << endl;
		return 0;
	}else{
		sum = (d - sum)/5 + 2*(n - 1);
		cout << sum << endl;
	}
	return 0;
}

