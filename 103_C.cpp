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
	string s,p;
	int lens, lenp;
	int a[26] = {0},b[26] = {0};

cin >> s >> p;
lens = s.length();
lenp = p.length();

	if(lens < lenp){
		cout << 0 << endl;
		return 0;
	}

	for(int i = 0; i < lenp; i++){
		if(s[i] != '?')
			a[s[i] - 'a']++;
	}
	for(int i = 0 ; i < lenp; i++){
			b[p[i] - 'a']++;
	}

	int count = 0;

	bool flag = true;

	for(int i = 0; i < 26; i++){
		if(a[i] > b[i]){
			flag = false;
			// cout << "flag " << endl;
			break;
		}
	}

	if(flag) count++;

	for(int i = 0; i < lens - lenp; i++ ){
		flag = true;
		if(s[i+lenp] != '?' ){
			a[s[i + lenp] - 'a']++;
			a[s[i] - 'a']--;
		}else{
			a[s[i] - 'a']--;
		}

		for(int j = 0; j < 26; j++){
			if(a[j] > b[j]){
				flag = false;
				break;
			}
		}

		if(flag) count++;
	}

	cout << count << endl;
	return 0;
}