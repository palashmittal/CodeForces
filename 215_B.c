#include<stdio.h>

int main()
{
	int n,m,i,j;
	scanf("%d%d",&n,&m);

	int a[111111],l[m+1];	
	int vis[111111];
	int arrC[111111];


	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<m;i++)
	{
		scanf("%d",&l[i]);
	}

	for(i=0;i<111111;i++)
	{
		vis[i]=0;
	}
	
	for(i=0;i<111111;i++)
	{
		arrC[i]=0;
	}
	for(i=n;i>=1;i--)
	{
		arrC[i]=arrC[i+1];
		if(vis[a[i]]!=1)
		{
			arrC[i]++;
			vis[a[i]]=1;
		}
	}

	for(i=0;i<m;i++)
		{
			printf("%d\n",arrC[l[i]]);
		}


	return 0;
}	