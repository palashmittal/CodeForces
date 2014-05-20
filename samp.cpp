#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <string>
#include <memory.h>
#include <sstream>
#include <ctime>

#define oo 1000000005
#define eps 1e-11

#define REP(i,n) for(int i = 0, _n = (n); i < _n; i++)
#define REPD(i,n) for(int i = (n) - 1; i >= 0; i--)
#define FOR(i,a,b) for (int i = (a), _b = (b); i <= _b; i++)
#define FORD(i,a,b) for (int i = (a), _b = (b); i >= _b; i--)
#define FOREACH(it,c) for (__typeof ((c).begin()) it = (c).begin(); it != (c).end(); it++)
#define RESET(c,x) memset (c, x, sizeof (c))

#define sqr(x) ((x) * (x))
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define ALL(c) (c).begin(), (c).end()
#define SIZE(c) (c).size()

using namespace std;

const double PI = 2.0 * acos (0.0);

typedef long long LL;
typedef pair <int, int> PII;

inline int getInt () { int x; scanf ("%d", &x); return x; }
inline LL getLL () { LL x; scanf ("%lld", &x); return x; };
inline int NUM (char c) { return (int)c - 48; }
inline char CHR (int n) { return (char)(n + 48); }
template <class T> inline T MAX (T a, T b) { if (a > b) return a; return b; }
template <class T> inline T MIN (T a, T b) { if (a < b) return a; return b; }

inline void OPEN (string s) {
    freopen ((s + ".in").c_str (), "r", stdin);
    freopen ((s + ".out").c_str (), "w", stdout);
}

// ptrrsn_1's template

#define MAXN 3000

int N;

struct orang {
	string nama;
	int a, h;
	bool operator<(const orang &o) const {
		return a < o.a;
	}
};

orang O[MAXN + 5];

vector <int> v;

int main () {
	// OPEN("C");
	scanf("%d", &N);
	REP (i, N) cin >> O[i].nama >> O[i].a;
	sort(O, O + N);
	bool flag = true;
	int height = N;
	REP (i, N) {
		if (O[i].a > SIZE(v)) {
			flag = false;
			break;
		} else {
			v.insert(v.begin() + O[i].a, i);
			// cout << v[i] << " ";
			O[i].h = height--;
		}
	}

	if (!flag) puts("-1");
	else {
		REP (i, N) {
			int j = v[i];
			cout << j;
			printf("%s %d\n", O[j].nama.c_str(), O[j].h);
		}
	}
    return 0;
}