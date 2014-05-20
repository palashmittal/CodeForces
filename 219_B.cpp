#include <stdio.h>
#include <iostream>
#include <math.h>


long long int w,m,k;

using namespace std;

int numD(long long n)
{
	int num=0;
	while(n>0)
	{
		n=n/10;
		num++; 
	}
	return num;
}


int main()
{
	cin >> w >> m >> k;
	long long int cost=0;

	if(k>w)
		cout << '0' << endl;
	else
	{
		int dig = numD(m);
		long long count = 0;
		long long int prev = m;
		while(1)
		{
			long long int next = pow(10,dig);
			if((next-prev)<w/(k*dig))
			{
				cost += (next-prev)*k*dig;
				
				dig = dig+1;
				count += (next-prev);
				prev = next;

			}
			else
			{
				if(cost == w)
				{
					cout << count << endl;
					break;	
				}
					
				else
				{
					count += (w - cost)/(dig * k);
					cout << count << endl;
					break;
				}
			}
		}
	}
	
	return 0;
}