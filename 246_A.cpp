#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <string.h>

using namespace std;

typedef long long int64;
typedef unsigned long long uint64;
#define two(X) (1<<(X))
#define twoL(X) (((int64)(1))<<(X))
#define contain(S,X) (((S)&two(X))!=0)
#define containL(S,X) (((S)&twoL(X))!=0)
const double pi=acos(-1.0);
const double eps=1e-11;
template<class T> inline void checkmin(T &a,T b){if(b<a) a=b;}
template<class T> inline void checkmax(T &a,T b){if(b>a) a=b;}
template<class T> inline T sqr(T x){return x*x;}
typedef pair<int,int> ipair;
#define SIZE(A) ((int)A.size())
#define LENGTH(A) ((int)A.length())
#define MP(A,B) make_pair(A,B)
#define PB(X) push_back(X)


int main(){

	// freopen("in.txt","r",stdin);
	int n,k;
	cin >> n >> k;
	vector <int > a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(),a.end());
	// std::reverse(a.begin(),a.end());
	int count = 0;
	for(int i = 0; i < n;i += 3){

		if(i+2 >= n) break;

		// cout << a[i] << endl;

		if(a[i] + k <=5 && a[i+1] + k <= 5 && a[i + 2 ]+ k <= 5 )
			count++;

		// cout << "count" << endl;
	}
	cout << count << endl;
	return 0;
}