#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
	int n,d,i,m,sum=0;
	scanf("%d%d",&n,&d);
	int a[n];
	int summ[n];

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	for(i=0;i<n;i++)
	{
		sum+=a[i];
		summ[i]=sum;
	}

	scanf("%d",&m);
	//sort(a,a+n);
	if(n<m)
	{
		printf("%d\n",sum-(m-n)*d);
	}
	else printf("%d\n",summ[m-1]);
	return 0;
}