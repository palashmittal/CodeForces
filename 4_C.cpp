#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <vector>
#include <sstream>
#include <queue>
#include <math.h>
#include <time.h>
#include <set>
#include <utility>
#include <map>
#include <stdio.h>
#include <assert.h>
#include <limits.h>
 
using namespace std;

 
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef long long ll;
typedef vector<int> vi;
typedef long double ld;
#define var(a,b) __typeof(b) a = b
#define rep(i,n) for(int i = 0;(i) < (n); ++i)
#define rept(i,a,b) for(var(i,a); i < (b); ++i)
#define tr(v,it) for(var(it,v.begin());it!=v.end();++it)
#define fill(a,val) memset(a,val,sizeof(a))
#define all(v) v.begin(),v.end()

struct sort_pred {
    bool operator()(const std::pair<string,int> &left, const std::pair<string,int> &right) {
        return left.second < right.second;
    }
};



int main(){
	int n;
	cin >> n;

	set<string> st;
	std::set<string>::iterator it;
	map <string,int > pam;
	// for(int i = 0; i < n;in++){

	// }
	string s;
	vector < pair <string,int>  > v;
	for(int i = 0; i < n; i++){
		cin >> s;
		v.pb(make_pair(s,0));
	}

	sort(v.begin(),v.end());
	v[0].ss = 0;
	for(int i = 1; i < n;i++){
		if(v[i].ff == v[i-1].ff){
			v[i].ss = v[i - 1].ss + 1;
		}
		else v[i].ss = 0;
	}

	sort(v.begin(),v.end(),sort_pred());

	for(int i = 0; i < n; i++){
		cout << v[i].ff << v[i].ss << endl;
	}

	return 0;
}