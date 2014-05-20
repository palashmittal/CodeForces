#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int k,l,m,n,d;
	cin >> k >> l >> m >> n >> d;
	int count=0;
	int i=0;
	for(i=1; i<=d;i++)
	{
		if(i%k==0)
		{
			count++;
		}
		else if(i%l==0)
		{
			count++;
			
		}
		else if(i%m==0)
		{
			count++;
			
		}
		else if(i%n==0)
		{
			count++;
		}
	}

	
	cout << count << endl;
	return 0;
}