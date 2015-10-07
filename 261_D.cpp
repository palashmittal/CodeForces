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
	vector < pair <int, int > > v(n);
	vector < pair < pair <int,int> ,int > > arr(n);
	int x,y;
	rep(i,n){
		cin >> x;
		v.pb(mp(x,i+1));
	}	
	sort(v.begin(),v.end());

	int flag = 0;
	int count = 1;

	arr.pb(mp(mp(v[0].first,v[0].second),1));


	for(int i = 1; i < n; i++){
		if(v[i].first == v[i -1 ].first){
			count++;
		}else count = 1;
		arr.pb(mp(mp(v[i].first,v[i].second),count));
	}

	sort(arr.begin(),arr.end());


	return 0;
}
