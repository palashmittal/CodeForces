#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int n,m,q;
	cin >> n >> m >> q;
	string s;
	int a[n+1][m+1],i = 0,j = 0;
	for(i = 1;i < n+1;i++)
	{
		cin >> s;
		for(j = 1;j < m+1;j++)
		{
			a[i][j] = int(s[j-1])-(int)'0';
		}
	}

	int arr[n+1][m+1][2];

	for(i = 0;i < n+1;i++)
	{
		for(j = 0;j < m+1;j++)
		{
			arr[i][j][0] = 0;
			arr[i][j][1] = 0;
		}
	}



	for(i = 1;i < n+1;i++)
	{
		for(j = 1;j < m+1;j++)
		{
			arr[i][j][a[i][j]] = 1;
		}
	}


	for(i = 1;i < n+1;i++)
	{
		for(j = 1;j < m+1;j++)
		{
			if(j == 1) arr[i][j][a[i][j]]=1;
			else
			{
				arr[i][j][0] += arr[i][j-1][0];
				arr[i][j][1] += arr[i][j-1][1];
			}
		}
	}

	for(i = 1;i < n+1;i++)
	{
		for(j = 1;j < m+1;j++)
		{
			if(i == 1 && j==1) continue;
			else
			{
				arr[i][j][0] += arr[i-1][j][0];
				arr[i][j][1] += arr[i-1][j][1];
			}
		}
	}


	for(i = 1;i < n+1;i++)
	{
		for(j = 1;j < m+1;j++)
		{
			printf("%d,%d   ",arr[i][j][0],arr[i][j][1]);
		}
		printf("\n");
	}

	int x=0,k,l;

	int count[n+1][m+1][41][41];
	for(i = 0;i < n+1;i++)
	{
		for(j = 0;j < m+1;j++)
		{
			for(k=0;k<n+1;k++)
			{
				for(l=0;l<m+1;l++)
				{
					x=arr[i][j][1]-arr[i][l-1][1]-arr[k-1][j][1]+arr[k-1][l-1][1];
					if(x==0)
						count[i][j][k][l]=1;
				}				
			}
		}
	}


	for(i = 1;i<n+1;i++)
	{
		for(j=1;j<m+1;j++)
		{
			for(k=i;k<n+1;k++)
			{
				for(l=j;l<n+1;l++)
				{
					count[i][j][k][l] += count[i][j][k-1][l] + count[i][j][k][l-1] - count[i][j][k-1][l-1];
				}
			}
		}
	}
	printf("count [%d][%d][%d][%d] = %2d\n",1,1,2,2,count[1][1][2][2]);



	// for(i = 1;i <= n;i++)
	// {
	// 	for(j = 1;j <= m;j++)
	// 	{
	// 		for(e = 1; e <= i;e++)
	// 		{
	// 			for(f = 1;f <= j; f++)
	// 			{
	// 				x = arr[i][j][1]-arr[i][f-1][1]-arr[e-1][j][1]+arr[e-1][f-1][1];
	// 				if(x == 0)
	// 					count[i][j]++;
	// 			}
	// 		}
	// 	}
	// }


	// for(i = 1;i < n+1;i++)
	// {
	// 	for(j = 1;j < m+1;j++)
	// 	{
	// 		printf("%d  ",count[i][j]);
	// 	}
	// 	printf("\n");
	// }

	// printf("\n\n");

	// for(i = 1;i < n+1;i++)
	// {
	// 	for(j = 1;j < m+1;j++)
	// 	{
	// 		{
	// 			count[i][j] += count[i][j-1];
	// 		}
	// 	}
	// }

	// for(i = 1;i < n+1;i++)
	// {
	// 	for(j = 1;j < m+1;j++)
	// 	{
	// 			count[i][j] += count[i-1][j];
	// 	}
	// }





	// for(i = 1;i < n+1;i++)
	// {
	// 	for(j = 1;j < m+1;j++)
	// 	{
	// 		printf("%d  ",count[i][j]);
	// 	}
	// 	printf("\n");
	// }






	int x1,y1,x2,y2;
	for(k = 0;k < q;k++)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		int ans = 0;
		//int x=0, e = 0, f = 0;
		// for(i = x1;i <= x2;i++)
		// {
		// 	for(j = y1;j <= y2;j++)
		// 	{
		// 		for(e = x1; e <= i;e++)
		// 		{
		// 			for(f = y1;f <= j; f++)
		// 			{
		// 				x=arr[i][j][1]-arr[i][f-1][1]-arr[e-1][j][1]+arr[e-1][f-1][1];
		// 				if(x==0)
		// 					count++;
		// 			}
		// 		}
		// 	}
		// }
	//	ans = count[x2][y2]-count[x2][y1-1]-count[x1-1][y2]+count[x1-1][y1-1];

		cout << ans <<endl;
	}

	return 0;


}
