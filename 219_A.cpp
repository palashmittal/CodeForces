#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	int k,j;
	cin >> k;
	string s;
	int i=0;

	int count[11];
	for(i=0;i<11;i++) count[i]=0;

	for(i=0;i<4;i++)
	{
		cin >> s;
		for(j=0;j<4;j++)
		{
			if(s[j]=='.')
				continue;
			else
			{
				int c= (int)s[j]-(int)'0';
				count[c]++;
			//	printf("%d\n",c);
			}
		}
	}


	int flag=1;

	for(i=1;i<10;i++)
	{
		if(count[i]>2*k)
		{
			flag=0;
			break;
		}
	}

	if(flag==0)
		printf("NO\n");
	else printf("YES\n");

	return 0;

}