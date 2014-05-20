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

int main(){
	int x, k;
	cin >> x >> k;
	int a,div1,div2;
	// vector < pair <int , int > >  v(k);
	// if( k == 0){
	// 	int max = x -1;
	// 	if( x%2 ==)
	// }
	vector <int > v(x);
	for(int i = 0; i < x;i++){
		v[i] = 0;
	}

	for(int i = 0; i < k;i++){
		cin >> a;
		if(a == 1){
			cin >> div2 >> div1;
			// v[i].ff = div2;
			// v[i].ss = div1;
			v[div2] = -1;
			v[div1] = -1;
		}else{
			cin >> div2;
			// v[i].ff = div2;
			// v[i].ss = 0;
			v[div2] = -1;
		}
	}

	v[0] = 2;
	int max = 0,min = 0;
	for(int i = 1; i < x - 1;i++){
		if(v[i] == 0){
			max++;
		}

		if(v[i] == 0){
			if(v[i - 1] == 0){
				min++;
				v[i] = 2;
			}
			else if(v[i+1] == -1){
				min++;
			}
		}
	}

	if(v[x -1] == 0) {
		min++;
		max++;
	}

	cout << min << " " << max << endl;
	return 0;
}