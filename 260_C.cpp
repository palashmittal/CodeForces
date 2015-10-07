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
	int arr[n];
	map <int, int> p;
	int count[n];
	fill(count,0);
	rep(i,n){
		cin >> arr[i];
		count[arr[i]]++;
	}
	sort(arr,arr + n);
	reverse(arr,arr + n);

	rep(i,n){
		p.insert(mp(arr[i],count[arr[i]]));
	}
	

	



	return 0;
}
