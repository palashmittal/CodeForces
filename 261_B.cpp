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
	vi a(n);
	rep(i,n){
		cin >> a[i];
	}
	sort(a.begin(),a.end());

	int min = a[0];
	int max = a[n-1];
	int ans = max - min;

	

	ll countMin = 0;
	ll countMax = 0;

	rep(i,n){
		if(a[i] == min){
			countMin++;
		}else if(a[i]== max){
			countMax++;
		}
	}

	ll cal = countMin * countMax;

	if(ans == 0){
		cal = (countMin *(countMin - 1))/2;
	}
	

	cout << ans << " " << cal << endl;
	return 0;
}
