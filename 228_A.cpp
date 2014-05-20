#include <stdio.h>
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int gcd( int a, int b ) { return( b == 0 ? a : gcd( b, a % b ) ); }


int main(){
	int n,x;
	cin >> n;
	int a[n+1];
	for(int i = 0; i < n; i++){
		cin >> x;
		a[i] = x;
	}
	int result = gcd(a[0],a[1]);
	for(int i = 2; i < n; i++){
		result = gcd(result,a[i]);
	}
	printf("%d\n",result * n);
	return 0;
}