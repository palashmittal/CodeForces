#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n,a,b,c;
	cin >> n >> a >> b >> c;
	int arr[4001];

	int i=0;
	for(i=0;i<n+1;i++)
	{
		arr[i]=0;
	}
	arr[0]=1;
	for(i=0;i+a<=n;i++)
	{
		if(arr[i]!=0)
		{
			arr[i+a]=arr[i]+1;
		}
	//	printf("arr: %d\n",arr[i+a]);
	}

	for(i=0;i+b<=n;i++)
	{
		if(arr[i]!=0)
			arr[i+b]=max(arr[i]+1,arr[i+b]);
	}

	for(i=0;i+c<=n;i++)
	{
		if(arr[i]!=0)
			arr[i+c]=max(arr[i]+1,arr[i+c]);
	}

	
	cout << arr[n] - 1<< endl;

	return 0;
}