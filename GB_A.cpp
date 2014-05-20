#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int a,b;
	cin >> a >> b;
	int h = a;
	int res = 0;
	while(a>=b)
	{	
		h += a/b;
		a = a/b + a%b;

	}
	cout << h << endl;
}