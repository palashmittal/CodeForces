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
	string s;
	cin >> s;
	int plus = 0;
	int minus = 0;
	int len = s.length();
	rep(i,len){
		if(s[i] == '+'){
			if(i%2 == 1){
				plus++;
			}else minus++;
			
		}else{
			if(i%2 == 0)
				plus++;
			else minus++;
		}
	}
	if(plus == minus) cout << "Yes\n";
	else cout << "No\n";
	return 0;
}
