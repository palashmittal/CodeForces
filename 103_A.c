#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
//	int a[n];
	int a;
	int i=0;
	int min=200,minI=-1;
	int max=-1,maxI=-1;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a>max)
		{
			maxI=i;
			max=a;
		}
		if(a<=min)
		{
			minI=i;
			min=a;
		}
	}

	if(n==1)
		printf("0\n");
	else if(minI>=maxI)
	{
		printf("%d\n",n-minI+maxI-1);
	}
	else if(minI<maxI) printf("%d\n",n-minI+maxI-2);
	
return 0;


}