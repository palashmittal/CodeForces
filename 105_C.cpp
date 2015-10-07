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
	int n,a,b;
	cin >> n >> a >> b;

	int ans[n];
	ans[1] = 1;
	int sum =1;
	int curr = 1;

	for(int i = 2; i <= n; i++){
		if(b){
			curr = sum + 1;
			b--;
		}else if(a){
			if(i != 2){
				curr++;
				a--;
			}
			
		}
		sum += curr;
		ans[i] = curr;
	}

	if(a||b) cout << -1 << endl;
	else{
		for(int i = 1; i <= n; i++){
			cout << ans[i] << " " ;
		}
		cout << endl;
	}


	return 0;
}
