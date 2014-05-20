#include <stdio.h>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string s;
	cin>>s;
	while(s[0]!='#')
	{
		int i=0;
		int c0=0,c1=0;
		for(i=0;i<s.length()-1;i++)
		{
			if(s[i]=='0') c0++;
			if(s[i]=='1') c1++;
		}
		char c;
		if(c1%2==0)
		{
			if(s[i]=='e')
				s[i]='0';
			else s[i]='1';
		}
		else
		{
			if(s[i]=='e')
				s[i]='1';
			else s[i]='0';
		}
		cout<<s<<endl;
		cin>>s;
	}
	return 0;
}