#include <stdio.h>

int main()
{
	int n,t;
	int i=0,j=0;
	scanf("%d",&n);
	int arr[n][101];
	int b;

	for(i=0;i<n;i++)
		for(j=0;j<101;j++)
			arr[i][j]=0;


	for(i=0;i<n;i++)
	{
		scanf("%d",&t);
		for(j=0;j<t;j++)
		{
			scanf("%d",&b);
			arr[i][b]=1;
		}
	}

	for(i=0;i<n;i++)
	{
		int check;
		for(j=0;j<n;j++)
		{
			if(i==j)
				continue;
			else{
				check=0;
				for(t=0;t<101;t++)
				{
					if(arr[i][t]<arr[j][t])
					{
						check=1;
						break;
					}
				}
			}
			if (check==0)
				break;
		}
		if(check==0) printf("NO\n");
		else printf("YES\n");

	}

return 0;

}
