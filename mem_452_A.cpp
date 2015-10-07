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
	string str;
	cin >> str;
	vector <string> s;
	s.pb("vaporeon");
	s.pb("jolteon");
	s.pb("flareon");
	s.pb("espeon");
	s.pb("umbreon");
	s.pb("leafeon");
	s.pb("glaceon");
	s.pb("sylveon");

	sort(s.begin(), s.end());
	reverse(s.begin(), s.end());
	int index = 0;
	int count = 0;
	int arr[10];
	rep(i,10) arr[i] = 1;
	rep(i,n){
		
		count = 0;
		if(str[i] == '.') continue;
		else {
			for(int j = 0;j < s.size();j++){
				// cout << s[j].size() << "s[j] size" << endl;
					if(s[j].size() == n){
						if(str[i] == s[j][i]){
							// cout << "here" << endl;
							// cout << s[j] << endl;
							// cout << arr[j] << endl;
							if(arr[j] == 1){
								// cout << "now here " << endl;
								count++;
								index = j;
								}
						}else{
							arr[j] = 0;
						}
					}
			}
			// cout << count << endl;
			// cout << index << endl;

			// if(count == 1){
			// 	cout << s[index] << endl;
			// 	break;
			// }else{
			// 	continue;
			// }
		}
	}

	if(s[index].size() == n) {}
	else{
		for(int i = 0; i < s.size();i++){
			if(s[i].size() == n ){
				index = i;
			}
		}
	}
	cout << s[index] << endl;

	// rep(i,s.size()){
	// 	cout << s[i] << endl;
	// }
	return 0;
}
