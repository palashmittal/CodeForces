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

int x[100000+10] = {0};
int y[100000+10] = {0};


int main(){
	int n,c,d;
	cin >> n;
	vector < pair <int,int > > a;
	for(int i = 0; i < n; i++){
		cin >> c >> d;
		a.PB(make_pair(c,d));
		x[c]++;
		y[d]++;
	}

	int numMatch = n - 1;

	int home = numMatch;
	int away = numMatch;

	for(int i = 0 ; i < n; i++){
		home = numMatch;
		away = numMatch;


		home += x[a[i].second];
		away -= x[a[i].second];

		// printf("%d\n", x[a[i].second]);

		cout << home << " " << away << endl;
	}

	return 0;
}