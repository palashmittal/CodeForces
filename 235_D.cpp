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

//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);

int a[100];
ll f[1 << 18][100];

int main(){
	int m;
	ll n;
	cin >> n >> m;
	int numDig = 0;
	while(n){
		a[numDig++] = n%10;
		n /= 10;
	}

	sort(a, a + numDig);

	f[0][0] = 1;

	for(int mask = 0; mask < 1 << numDig; mask++){
		for(int k = 0; k < m; k++) if(f[mask][k]){

		}
	}



}