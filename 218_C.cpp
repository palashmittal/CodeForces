#include <cstdio>
#include <string>
#include <iostream>
//#include <algorithm>

using namespace std;

int countB=0,countS=0,countC=0;
int rateB,rateS,rateC;
int nB,nS,nC;
long long int r;

long long int max(long long i,long long j)
{
	return (i>j)?(i):(j);
}

long long int search(long long int i,long long int j)
{
	long long int mid=(i+j+1)/2;
	if(i==j) return i;
	if((max((countB*mid-nB)*rateB,0) +max((countS*mid-nS)*rateS,0) + max((countC*mid-nC)*rateC,0)) <= r)
		search(mid,j);
	else search(i,mid-1);
}

int main()
{
	string s;
	cin >> s;
	cin >> nB>>nS>>nC;
	cin >>rateB>>rateS>>rateC;
	cin >> r;

	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='B')countB++;
		else if(s[i]=='S')countS++;
		else countC++;
	}

//	printf("palash\n");
	long long int ans=search(0,10000000000000);

	cout<< ans<<endl;
	return 0;
}