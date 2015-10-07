#include <stdio.h>


int check(long long int arr,int k)
{
	int ch[10]; int i;
	for(i=0;i<10;i++)
		ch[i]=0;
	while(arr>0)
	{
		ch[arr%10]=1;
		arr/=10;
	}
	for(i=0;i<=k;i++)
	{
		if(ch[i]!=1) return -1;
	}
	return 1;
}


int main()
{
	int n,k;
	scanf("%d%d",&n,&k);

	long long int arr;
	int i,count=0;
	for(i=0;i<n;i++)
	{
		scanf("%lld",&arr);
		if(check(arr,k)==1)
			count++;
	//	printf("count: %d",count);
	}
	printf("%d\n",count);
	return 0;
}