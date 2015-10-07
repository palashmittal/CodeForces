#include <stdio.h>

int main()
{
	int n,k,c;
	scanf("%d%d",&n,&k);

	int a[100][3]={{0}};

	int i=0;
	for(i = 0;i < n;i++)
	{
		scanf("%d",&c);
		a[i%k][c]++;
	}
	int ans=0;
	for(i=0;i<k;i++)
	{
		ans+=(a[i][1]>a[i][2])?(a[i][2]):(a[i][1]);
	}
	printf("%d\n",ans);

return 0;

}