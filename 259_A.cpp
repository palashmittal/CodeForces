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
	int m = n;
	m /= 2;
	int k = 1;
	for(int i = 0; i < n; i++){
		for(int j = 0; j< m; j++)
			cout << "*";
		for(int j = 0; j < k; j++){
			cout << "D";
		}
		for(int j = 0; j<m; j++){
			cout << "*";
		}
		cout << endl;
		// m--;
		if(i < n/2 ){ k+=2; m--;}
		else {k-=2;m++;}
	}

	return 0;
}
