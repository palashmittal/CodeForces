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
	int n;
	string s;
	cin >> n;
	vector < string > arr;
	for(int i = 0; i < n; i++){
		cin >> s;
		arr.pb(s);
	}
	char c = arr[0][1];
	char m = arr[0][0];
	if(c == m){
		cout << "NO" << endl;
		return 0;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == j){
				if(arr[i][j] != m)
				{
					cout << "NO" << endl;
					return 0;
				}
			}
			else if( i == n - j - 1){
					if(arr[i][j] != m){
						cout << "NO" << endl;
						return 0;
					}
					
				}
			else{
				if( arr[i][j] != c){
					cout << "NO" << endl;
					return 0;
				}
			}
		}
	}

	cout << "YES" << endl;

	return 0;
}