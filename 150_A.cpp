#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	int i=0;
	int a[k+1];
	for(i=1;i<=k;i++)
	{
		scanf("%d",&a[i]);
	}
//	sort(a,a+k);

	int b[n*k+1];
	for(i=1;i<=n*k;i++)
	{
		b[i]=0;		
	}
	for(i=1;i<=k;i++)
		b[a[i]]=1;

	int c[n*k+1];
	int j=1;
	for(i=1;i<=n*k;i++)
	{
		if(b[i]==0)
			c[j++]=i;
	}

// for(i=1;i<=k;i++)
// 	printf("%d   ",a[i]);
	if(n==1)
	{
		for(i=1;i<=k;i++)
		{
			printf("%d\n",a[i]);
		}
	}

	for(i=1;i<=(n-1)*k;i++)
	{
		printf("%d ",c[i]);
		if(i%(n-1)==0)
			printf("%d\n",a[i/(n-1)]);
	}
}