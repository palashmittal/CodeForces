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
	int x,y;
	cin >> x;
	int count = 0;
	x = x%10;
	count++;	
	n--;
	while(n--){
		cin >> y;
		y = y%10;
		if(x == y)
			continue;
		else count++;
		x = y;
	}
	cout << count << endl;
	return 0;
}
