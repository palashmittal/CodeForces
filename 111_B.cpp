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
#define size(v) (int)v.size()
#define gi(n) scanf("%d",&n)
#define all(v) v.begin(),v.end()
#define debug(format,args...) {cerr<<#args<<" -> ";fprintf(stderr,format,args);cerr<<"\n";}

int main(){
	int n;
	cin >> n;
	int a[n+1],b[n+1];
	string s;
	cin >> s;
	int i;
	for(i = 0; i < n; i++){
		a[i] = s[i] - '0';
	}
	for(;i < 2*n;i++){
		b[i - n] = s[i] - '0';
	}
	sort(a,a+n);
	sort(b,b+n);
	int flag1 = 0,flag2 = 0;
	for(i = 0; i < n; i++){
		if(a[i] < b[i])
			flag1 += 1;
		else if(a[i] > b[i])
			flag2 += 1;
	}

	if(flag1 == n || flag2 == n){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}

	return 0;
}