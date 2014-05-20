#include <stdio.h>
#include <cstring>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	int  n;
	cin >> n;
	pair<int,int> a[n];
	int out[n];
	int i = 0;
	for(int i = 0;i < n;i++)
	{
		cin >> a[i].first;
		a[i].second = i;
	}
	sort(a,a+n);
	int cur = 0;
	for(int i = 0; i < n; i++)
	{
		a[i].first = max(a[i].first,cur + 1);
		cur = a[i].first;
		out[a[i].second] = a[i].first;
	}

	for(i = 0; i < n;i++)
	{
		cout << out[i] <<endl;
	}
}