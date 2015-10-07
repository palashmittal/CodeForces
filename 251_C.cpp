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
	int n,k,p;
	cin >> n >> k >> p;
	int e[n + 1];
	int o[n + 1];
	int eve = 0;
	int odd = 0;
	int x;
	rep(i,n) {
		cin >> x;
		if(x % 2 == 0){
			e[eve] = x;
			eve++;
		}else {
			o[odd] = x;
			odd++;
		}
	}
	if(odd < k - p || ((k-p)%2 == 0 && odd % 2 == 1) || ((k-p) % 2 == 1 && odd % 2 == 0) || (eve + (odd - (k - p))/2 < p) ) {
		cout << "NO" << endl;
		return 0;
	}
	vector < int> s[k +1 ];

	int numOdd = k - p;
	int numEve = p;
	int i = 0;

	while(odd > 0 || eve > 0){
		// cout << numOdd << "numOdd" << endl;
		while(numOdd > 0){
			s[i].pb(o[--odd]);
			i++;
			numOdd--;
		}

		while(numEve > 0){
			if(eve != 0){
				s[i].pb(e[--eve]);
				i++;
				numEve--;
			}else if(odd >= 2){
				s[i].pb(o[--odd]);
				s[i].pb(o[--odd]);
				i++;
				numEve--;
			}
		}

		// cout << numEve << "numEve";
		while(odd > 0){
			s[0].pb(o[--odd]);
		}
		while(eve > 0){
			s[0].pb(e[--eve]);
		}
		// if(numEve == 0 && eve > 0){
		// 	for(int j = 0; j < eve; j++){
		// 		s[i-1].pb(e[j]);
		// 	}
		// }

	}
	cout << "YES" << endl;
	for(int i = 0; i < k; i++){
		cout << s[i].size();
		for (std::vector<int>::iterator it=s[i].begin(); it!=s[i].end(); ++it)
    		std::cout << ' ' << *it;

    	cout << endl;
	}

	return 0;
}
