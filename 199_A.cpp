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
	int n;
	cin >> n;
	int x, c1 = 0,c2 = 0,c3 = 0,c4 = 0,c6 = 0;
	int flag = 1;
	rep(i,n){
		cin >> x;
		if(x == 1){
			c1++;
		}else if(x == 2){
			c2++;
		}else if(x == 3){
			c3++;
		}else if(x == 4){
			c4++;
		}else if (x == 6) c6++;
		else flag = -1;
	}
	if(flag == -1){
		cout << -1 << endl;
		return 0;
	}

	if(c1 == c2 + c3 && c1 == c4 + c6 && c3 <= c6){
		for(int i = 0; i < c1; i++){
			for(; i < c4; i++){
				cout << "1 2 4" << endl;
			}
			for(;i < c2; i++){
				cout << "1 2 6" << endl;
			}
			for(; i < c2 + c3; i++){
				cout << "1 3 6" << endl;
			}
		}
	}else cout << -1 << endl;

	return 0;
}