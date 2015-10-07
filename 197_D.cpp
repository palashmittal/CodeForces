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
	int n,m;
	cin >> n >> m;
	
	ll size = 1 << n;	

	vector < int > segT[20];
	int x,y;
	rep(i,size){
		cin >> x;
		segT[1].pb(x);
	}
	
	for(int i = 2; i <= n + 1;i++ ){
		size /= 2;
		for(int j = 0; j < size; j++){
			if(i % 2 == 0){
				segT[i].pb(segT[i - 1].at(2*j) | segT[i - 1].at(2*j + 1));
			}else{
				segT[i].pb(segT[i - 1].at(2*j) ^ segT[i - 1].at(2*j + 1));
			}
		}
	}
	

	rep(i,m){
		cin >> x >> y;
		x--;
		segT[1].at(x) = y;
		for(int j = 2; j <= n + 1; j++){
			if(j % 2 == 0){
				if(x % 2 == 0){
					segT[j].at(x/2) = segT[j - 1].at(x) | segT[j - 1].at(x + 1);
				}else segT[j].at(x/2) = segT[j - 1].at(x) | segT[j - 1].at(x - 1);
			}else{
				if(x % 2 == 0){
					segT[j].at(x/2) = segT[j - 1].at(x) ^ segT[j - 1].at(x + 1);
				}else segT[j].at(x/2) = segT[j - 1].at(x) ^ segT[j - 1].at(x - 1);
			}
			x /= 2;
		}
		cout << segT[n + 1].at(0) << endl;
	}


	return 0;
}