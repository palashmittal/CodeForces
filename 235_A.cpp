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
	int n ,x;
	cin >> n >> x;
	int sum = 0,in;
	for(int i = 0; i < n; i++){
		cin >> in;
		sum+= in;
	}
	if(sum == 0){
		cout << 0 << endl;
	}else{
		sum = abs(sum);
		int num = 0;
			num += sum /x;
			if(sum%x == 0){

			}else{
				num += 1;
			}
			cout << num << endl;
	}
	return 0;
}