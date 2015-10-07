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

ll pw(int num, int pow){
	ll ans = 1;
	while(pow--){
		ans *= num;
	}
	return ans;
}

bool checkSum(ll num, ll sum){
	int s = 0;
	while(num >0){
		s += num%10;
		num /= 10;
	}	
	if(sum == s) return true;
	else return false;
}

int main(){
	ll a,b,c;
	cin >> a >> b >> c;

	long long int arr[82];
	rep(i,82){
		arr[i+1] = b*pw(i+1,a) + c;
	}
	vi ar;
	rep(i,82){
		if(checkSum(arr[i+1],i+1) && arr[i+1] < 1000000000) ar.pb(arr[i+1]);
	}

	sort(ar.begin(), ar.end());
	if(ar.size() == 0) {
		cout << 0 << endl;
		return 0;
	}
	cout << ar.size() << endl;
	rep(i, ar.size()){
		cout << ar[i] << " ";
	}
	cout << endl;
	return 0;
}
