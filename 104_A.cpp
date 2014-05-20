#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int check(int * a,int n)
{
	int i=0;
	int val=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==4 || a[i]==7)
		{
			val=1;
			continue;
		}
		else
		{
			val=0;
			break;
		}
	}

	return val;
}



int main()
{
	int length;
	scanf("%d",&length);

	int i=0;
	string str;
	cin>> str;
	int a[length];
	for(i=0;i<length;i++)
	{
		a[i]=(int)(str[i])-(int)('0');
	}

	int sumfirst=0;
	int sumsec=0;
	for(i=0;i<length/2;i++)
	{
		sumfirst+=a[i];
	}
	for(;i<length;i++)
	{
		sumsec+=a[i];
	}

	int ch=check(a,length);

	if(ch==1 && sumfirst==sumsec)
		printf("YES\n");
	else printf("NO\n");

	return 0;

}

