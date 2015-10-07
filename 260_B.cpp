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



int powe(int ans, int num){
	int ret = 1;
	for(int i = 0; i < ans; i++){
		ret *= num;
	}
	return ret;
}


int main(){
	char c,prev1,prev2 = '0';
	scanf("%c",&c);
	prev1 = c;
	// cout << prev1 << endl;
	scanf("%c",&c);
	if(c != '\n'){
		prev2 = prev1;
		prev1 =c;
	}
	// cout << prev2 << endl;
	scanf("%c", &c);
	while(c != '\n'){
		prev2 = prev1;
		prev1 = c;
		scanf("%c", &c);
	}
	// cout << prev2 << prev1 << endl;
	// cout << prev;
	int n = int(prev2 - '0')*10 + int(prev1 - '0');
	int ans = 1;
	int an2 = n %4;
	int an3 = n%4;
	int an4 = n%2;
	ans = 1 + powe(an2,2) + powe(an3,3) + powe(an4,4);
	// cout << ans;
	ans %= 5;
	cout << ans << endl;

	return 0;
}

