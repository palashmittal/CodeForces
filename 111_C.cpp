#include <iostream>
#include <algorithm>
#include <cmath>
#include <time.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <queue>
#include <utility>
#include <vector>
#include <time.h>
#include <stdio.h>
#include <list>
#include <limits> // for numeric_limits
#include <set>
#include <iterator>
#include <memory.h>

using namespace std;

#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define var(a,b)  __typeof(b) a = b
#define rep(i,n)  for(int i = 0;(i) < (n);  ++i)
#define rept(i,a,b) for(var(i,a); i < (b); ++i)
#define tr(v,it)  for(var(it,v.begin());it!=v.end();++it)
#define fill(a,val) memset(a,val,sizeof(a))
#define gi(n) scanf("%d",&n);
#define all(v) v.begin(),v.end()
#define max(a,b) a>b?a:b
#define min(a,b) a>b?b:a
#define MOD 1000000007
#define INF 99999999
#define a_max 100100
#define ll long long int
#define debug_lld(a) printf("Debug here %I64d\n",a);

typedef pair<ll,ll> pll;
typedef pair<int,int > pii;
typedef pair<ll,pii>plp;

int main()
{
	ll n,k,p;
	cin>>n>>p;
	ll arr[100006];
	for(ll i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	ll arr1[100006],arr2[100006];
	k=0;
	arr1[0]=1;
	arr2[0]=arr[0];
	for(ll i=1;i<n;i++)
	{
		if(arr[i]==arr[i-1])
			arr1[k]++;
		else
		{
			k++;
			arr1[k]=1;
			arr2[k]=arr[i];
		}

	}
	ll i,j;
	ll x=0,y=0;
	ll c_freq=arr1[0]*n;
	for(i=0;i<k;i++)
	{
		if(c_freq>=p)
			break;
		else
		{
			c_freq=c_freq+arr1[i+1]*n;
		}
	}
	c_freq=c_freq-arr1[i]*n;
	for(j=0;j<k;j++)
	{
		c_freq=c_freq+arr1[i]*arr1[j];
		if(c_freq>=p)
			break;
	}
	cout<<arr2[i]<<" "<<arr2[j]<<endl;
	return 0;
}