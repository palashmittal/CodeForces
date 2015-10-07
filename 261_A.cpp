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
	int x1,x2,y1,y2;
	int x3,x4,y3,y4;
	cin >> x1 >> y1 >> x2 >> y2;
	int diff = 0;
	if(x1 == x2){
		diff = abs(y1 - y2);
		x3 = x1 + diff; y3 = y1;
		x4 = x2 + diff;	y4 = y2;
	}else if(y1 == y2){


		diff = abs(x1 - x2);
		y3 = y1 + diff; x3 = x1;
		y4 = y1 + diff;	x4 = x2;

	}else if(abs(x1 - x2) == abs(y1 - y2)){
		x3 = x1;
		y3 = y2;
		x4 = x2;
		y4 = y1;
	}else {
		cout << -1 << endl;
		return 0;
	}

	cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;

	return 0;
}
