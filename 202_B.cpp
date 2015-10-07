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
	int lit = 0;
	cin >> lit;

	int a[10];
	int min = 100000000;
	int num = 0;
	rep(i,9){
		cin >> a[i + 1]	;
		if(min >= a[i + 1]){
			min = a[i + 1];
			num = i + 1;
		}
	} 

	int len = lit/min;
	// cout << len << endl;
	if(!len){
		cout << - 1 << endl;
		return 0;
	}
	int rem = lit - (lit/min) * min;
	int b[len + 1];
	for(int i = 0; i < len; i++){
		b[i] = num;
	}
	// rep(i,len) cout << b[i];
	// cout << endl;
	// cout << rem << endl;
	int dig = 0;
	int j = 0;

	int n = len;
	while(n > 0){
		for(int i = 9; i > num; i--){
			if(a[i] - min <= rem){
				b[j] = i;
				j++;
				rem = rem - a[i] + min;
				break;
			}
		}
		n--;
	}
	

	rep(i,len) cout << b[i];
	cout << endl;

	return 0;
}
