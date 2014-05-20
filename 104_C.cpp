#include <stdio.h>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	string a,b;
	cin>>a;
	cin>>b;

	int count4=0;
	int count7=0;
	//int count4B=0;
	//int count7B=0;

	int i=0;
	for(i=0;i<a.length();i++)
	{
		if(a[i]==b[i])	continue;
		if(a[i]=='4' && b[i]=='7') count4++;
		if(a[i]=='7' && b[i]=='4') count7++;
	}

	cout<<max(count4,count7)<<endl;
	return 0;
}
