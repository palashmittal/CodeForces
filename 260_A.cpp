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
	vector< pair<int,int> > array;
	int n;
	cin >> n;
	int x,y;
	rep(i,n){
		cin >> x >> y;
		array.pb(mp(x,y));
	}

	sort(array.begin(),array.end());
	int best = -1;
	int pr = 10000000;
	int flag = 0;
	rep(i,n-1){
		if(array[i].ss > array[i+1].ss){
			flag = 1;
			break;
		}
	}
	if(flag) cout << "Happy Alex\n";
	else cout << "Poor Alex\n";
	return 0;
}
