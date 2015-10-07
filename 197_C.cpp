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

string str;
int m;
int a[1100];

bool dfs(int x,int s){
	if(x > m){
		cout << "YES" << endl;
		int i = 1;
		for(int i = 1; i <= m; i++){
			cout << a[i] << " ";
		}
		if(i == m + 1){
			cout << endl;
		}
		return 1;
	}

	for(int i = s + 1; i <= 10; i++){
		if(i != a[x - 1] && str[i - 1] == '1'){
			a[x] = i;
			if(dfs(x + 1,i - s)) return 1;
		}
	}
	return 0;
}



int main(){
	cin >> str;
	cin >> m;
	a[0] = 0;
	if(!dfs(1,0)) cout << "NO" << endl;

	return 0;
}
