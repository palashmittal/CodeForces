#include <stdio.h>

int main()
{
	int n,k,l,r,sa,sk,i;
	scanf("%d%d%d%d%d%d",&n,&k,&l,&r,&sa,&sk);

	int s2,rs;
	int team[n+1];
	
	rs=sa-sk;

	for(i=0;i<k;i++)
	{
		team[i]=sk/k;
		if((sk%k)!=0){ team[i]++;sk--;}
	}

	if(k!=n)
	{
		for(i=k;i<n;i++)
		{
			team[i]=(rs)/(n-k);
			if((rs%(n-k)!=0)){ rs--;team[i]++;}
		}
	}



	for(i=0;i<n;i++)
		printf("%d ",team[i]);
	return 0;

}