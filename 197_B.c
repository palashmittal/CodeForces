#include <stdio.h>
#include <math.h>

int main()
{
	int n,m;
	int a[111111];

	scanf("%d%d",&n,&m);
	int i=0;
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}

	long long int sum=a[0]-1;
	for(i=1;i<m;i++)
	{
		if(a[i]>=a[i-1]){
			sum += abs(a[i]-a[i-1]);
		}else {
			sum += n-(abs(a[i]-a[i-1]));
		}
	}
	printf("%lld\n",sum);
	return 0;

}