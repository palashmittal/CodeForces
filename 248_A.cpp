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
	int a = 0,b = 0;
	int n,x;
	cin >> n;
	while(n--){
		cin >> x;
		if(x == 100)
			a++;
		else b++;
	}

	if(a >=2 && a % 2 == 0){
		cout << "YES\n";
	}else if(a == 0 && b % 2== 0){
		cout << "YES\n";
	}else cout << "NO\n";	

	return 0;
}