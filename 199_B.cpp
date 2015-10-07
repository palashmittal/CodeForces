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




int a[100000 + 10];


int find(int l,int h,int val){
	if(h < l )return -1;
	int m = (l + h)/2;
	if(a[m] == val) return m;
	if(a[m] < val) return find(m + 1,h, val);
	return find(l,m -1 ,val);
}



int main(){
	int n,m,s,f;
	cin >> n >> m >> s >> f;
	vector < pair <int, int> >v;
	int x,l,r;
	rep(i,m){
		cin >> x >> l >> r;
		a[i] = x;
		v.pb(mp(l,r));
	}

	char ch;
	char def = 'X';
	int flag = 0;
	string ans = "";

	if(s < f) {
		ch = 'R';
		flag = 1;
	}
	else {
		ch = 'L';
		flag = -1;
	}

	int prev = 1;

	// std::vector<int>::iterator it;
	int i = 0;
	while( s != f){
		i++;
		int it = find(0,m -1, i);
		// cout << it << endl;
		if(it == -1){
			cout << "here" << endl;
			s += flag;
			ans += ch;
		}else if(s < v[it].ff || s > v[it].ss){	
				if( s + flag < v[it].ff || s + flag > v[it].ss){
					ans += ch;
					s += flag;
				}else{
					ans += def;
				}
		}else ans += def;
	}
	// cout << i << endl;
	cout << ans << endl;
	return 0;
}