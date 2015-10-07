#include<stdio.h>

int main()
{
	int n,m,k,i,a;

	scanf("%d%d%d",&n,&m,&k);
	int ma=0,ka=0;
	int count;
	for(i=0;i<n;i++)
	{
			scanf("%d",&a);
			if(a==1)
				ma++;
			else 
				ka++;
	}
	if(ma>m)
	{
		count=ma-m;
		if(ka>k) 
		{
			count=ka+ma-m-k;
		}
	}
	else
	{
		if(ka>m+k-ma)
		{	
			count=ma+ka-m-k;
		}		
		else 
			count=0;
	}

	printf("%d\n",count);
	return 0;
}
