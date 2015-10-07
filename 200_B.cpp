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
	int a,b,c;
	cin >> a >> b >> c;
	if((a + b + c)%2){
		cout << "Impossible\n";
	}else{
		int m = (a + b + c)/2;
		int x = m - a;
		int y = m - b;
		int z = m - c;
		if((x<= 0 && y<=0) || (x <= 0 && z<= 0) || (y <= 0 && z <= 0) || x < 0 || y < 0 || z < 0){
					cout << "Impossible\n";
		}else{
			cout << z << " " << x << " "<< y << endl;
		}
	}

	return 0;
}
