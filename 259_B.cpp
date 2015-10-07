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
	int a[n + 10];
	rep(i,n){
		cin >> a[i];
	}	
	int flag = 0;
	int max = a[0];
	int index = 0;
	rep(i,n-1){
		if(a[i+1] >= a[i]){
		}else{
			flag++;
			index = i+1;
		}
		
	}
	
	if(flag == 0){
		cout << 0 << endl;
	}else if( a[n-1] > a[0]){
		cout << -1 << endl;
	}else if(flag == 1){
			cout << n - index  << endl;
	}else cout << -1 << endl;
	return 0;
}
