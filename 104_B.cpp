#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int check(int a,int b)
{
	int c[50];
	int count =0;
	while(a>0)
	{
		if(a%10 == 4 || a%10==7)
		{
			c[count]=a%10;
			count++;
		}
		a=a/10;
	}
	int num=0;
	int mul=1;
//	cout<<"palash"<<endl;
	for(int i=count-1;i>=0;i--)
	{
		num=num*mul;
		num+=c[i];		
		mul=10;
	}

	if(num == b)
		return 1;
	else return 0;
}



int main()
{
	long long int a,b;
	cin>>a>>b;

	if(b>a)
	{
		cout<<b<<endl;
		return 0;
	}
	else if (b==a)
	{
		cout<<1<<b;
	}
	else
	{
		long long int i=0;
		for(i=a+1;;i++)
		{
		//	cout<<"palashmittal";
			int ch=check(i,b);
			if(ch==1)
			{
				cout<<i<<endl;
				break;
			}
			else 
				{
					//printf("palash\n");
					continue;
				}
		}
	}

	return 0;
}