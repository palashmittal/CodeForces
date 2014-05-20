#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n,i = 0;
	cin >> n;
	while(i<n)
	{
		int x;
		cin >> x;
		int flag = -1; 
		for( ; x-- ;){
			if(flag == 1){
				if(i != n-1) printf("RL");
					else printf("LR");
			}
			printf("P");
			flag = 1;
		}
		if(i != n-1) printf("R");
		i++;
	}
	printf("\n");
	return	0;
}