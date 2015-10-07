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
	ll arr[n+1];
	ll sum[n+1];
	sum[0] = 0;
	rep(i,n){
		cin>> arr[i+1];
		sum[i+1] = sum[i] + arr[i+1];
	}
	int m;
	cin >> m;

	sort(arr+1,arr+n+1);

	ll sum2[n+1];
	sum2[0] = 0;

	rep(i,n){
		sum2[i+1] = sum2[i] + arr[i+1];
	}

	int type,l,r;
	rep(i,m){

		cin >> type >> l >> r;

		if(type == 1){
			ll ans = sum[r] - sum[l-1];
			cout << ans << endl;
		}else if(type == 2){
			ll ans = sum2[r] - sum2[l-1];
			cout << ans << endl;
		}
	}

	return 0;
}