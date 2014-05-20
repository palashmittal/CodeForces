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
	int num0, num1;
	
	cin >> num0 >> num1;

	if( num1 > 2 * (num0 + 1)){
		cout << -1 << endl;
		return 0;
	}

	if(num1 + 1 < num0){
		cout << -1 << endl;
		return 0;
	}


	while(num0 > 0 && num1 >0){
		if(num1 > num0){
			cout << "110";
			num1 -= 2;
			num0 -= 1;
		}
		else if(num1 == num0){
			cout << "10";
			num1 -= 1;
			num0 -= 1;
		}
		else {
			cout << 0;
			num0 -= 1;
		}
	}
	if( num0 > 0){
		for(int i = 0; i < num0;i++){
			cout << "0";
		}
	}
	if(num1 > 0){
		for(int i = 0; i < num1;i++){
			cout << "1";
		}
	}
	cout << endl;


	return 0;
}