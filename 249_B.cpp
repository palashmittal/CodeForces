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
	int k;

	cin >> s >> k;
	int len = s.size();

	for(int i = 0; i < len; i++){
		int best = i;

		for(int j = i; j < len && j <= i + k; j++){
			if(s[best] < s[j])
				best = j;
		}

		char ch = s[best];
		for(int j = best; j > i; j--){
			s[j] = s[j - 1];
		}
		s[i] = ch;
		k -= (best - i);
	}


	cout << s << endl;

	return 0;
}