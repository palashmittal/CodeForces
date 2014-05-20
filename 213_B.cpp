#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define rep(i,n) for(i=0;i<n;i++)

int main()
{
	int n;
	cin>> n;
	int i=0;
	long long int a[n];
	for(i=0;i<n;i++) cin>>a[i];
	long long dp[n+1];
	for(i=0;i<n;i++)
	{
		if(i<2) dp[i]=i+1;
		else
		{
			if(a[i]==a[i-1]+a[i-2]){
				dp[i]=max((long long)3,dp[i-1]+1);
			}else dp[i]=0;
		}
	}	
	long long int maxd=-1;
	rep(i,n) maxd=(max(maxd,dp[i]));
	cout<<maxd<<endl;

}