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

#define EPS 1e-2


int  cal (double a,double d){

	int di = ((long long int)d )/(long long int)(a);
	return di%4;
}



int main(){
	double a,d;
	cin >> a >> d;
	int n;
	cin >> n;

	// double arri[] = {0, -1, a, -1};
	// double arrj[] = {-1, a, -1 , a};
	double dis = 0.0;

	double x = 0.0;
	double y = 0.0;

	double sc = 10000.0;

	ll aa , dd;

	aa = (ll)(a * 10000.0 + EPS);
	dd = (ll)(d * 10000.0 + EPS);

	int di = 0;

	ll p,q,r;
	for(int i=1;i<=n;i++)
	    {
	        p=(i*dd);
	        q=p/aa;
	        r=p%aa;
	        q=(q%4);
	        //cout<<q<<" "<<r<<endl;
	        if(q==0) printf("%.9lf %.9lf\n",(double)r/10000.0,0.0);
	        if(q==1) printf("%.9lf %.9lf\n",a,(double)r/10000.0);
	        if(q==2) printf("%.9lf %.9lf\n",a-(double)r/10000.0,a);
	        if(q==3) printf("%.9lf %.9lf\n",0.0,a-(double)r/10000.0);
	    }

	return 0;
}