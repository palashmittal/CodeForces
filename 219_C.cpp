#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;



int main()
{
	int n;
	cin >> n;
	int i = 0;
	int arr[n+1];
	for(i = 0;i < n;i++)
		cin >> arr[i];

	sort(arr , arr+n);
	int *mem = (int *)malloc(sizeof(int)*n);
	for(i = 0;i < n;i++)
		mem[i] = 0;

	int mid;
	if(n%2 == 0)
		mid = n/2 - 1;
	else mid = n/2;
	int last = n-1;

	int count=0;

	while(mid >= 0 && mem[last] == 0)
	{
		if(arr[last]>=2*arr[mid])
		{
			mem[last] = 1;
			mem[mid] = 1;
			last--;
			mid--;
			count++;
		}
		else
			mid--;
	}

	cout << n-count << endl;

}