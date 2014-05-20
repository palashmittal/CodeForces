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
 
#define rep(i,n) for(__typeof(n) i = 0; (i) < (n); ++i)
#define fu(i,a,b) for(__typeof(a) i = (a); (i) <= (b); ++i)
#define fd(i,a,b) for(__typeof(a) i = (a); (i) >= (b); --i)
#define tr(v,it) for(__typeof(v.begin()) it=v.begin();it!=v.end();++it)
 
typedef long long ll;
typedef unsigned long long ull;
typedef vector <int> vi;
typedef pair <int,int> pii;
typedef long double ld;
 
#define pb push_back			
#define mp make_pair
#define linf LONG_LONG_MAX
#define inf INT_MAX
#define X first
#define Y second
#define fill(a,val) memset(a,val,sizeof(a))
// #define size(v) (int)v.size()
#define gi(n) scanf("%d",&n)
#define all(v) v.begin(),v.end()
#define debug(format,args...) {cerr<<#args<<" -> ";fprintf(stderr,format,args);cerr<<"\n";}

int main(){

	// freopen("in.txt","r",stdin);
	int n,x;
	string s;
	cin >> n;
	vector< pair <int, string> > in(n);
	vector< pair <int, string> > out(n);
	for(int i = 0; i < n;i++){
		cin >> s >> x;
		in[i].first = x;
		in[i].second = s;
	}
	sort(in.begin(),in.end());
	vector <int > v;

	int height = n;
	int count = 0;
	bool flag = true;
	for(int i = 0; i < n; i++){
		if(in[i].first > count){
			flag = false;
			break;
		}else{
			count++;
			v.insert(v.begin() + in[i].first,i);
			out[i].first = height--;
			out[i].second = in[i].second;
		}
	}

	if(!flag){
		cout << "-1" << endl;
		return 0;
	}

	for(int i = 0; i < n; i++){

		cout << out[v[i]].second << " " << out[v[i]].first << endl;
	}
	return 0;
}