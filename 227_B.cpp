#include <stdio.h>
#include <algorithm>
#include <cstring>
#include <iostream>

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int a[n],b[m];
	int i = 0, j = 0,x;
	for(i = 0; i < n ; i++){
		cin >> x;
		a[i] = x;
	}
	for(i = 0; i < m;i++){
		cin >> x;
		b[i] = x;
	}
	sort(a,a+n);
	sort(b,b+m);

	int count = 0;
	i = 0;
	j = m-1;
	for(i = 0 ; i < n ; i++){
		if(a[i] > b[m-1]){
			// count = i - 1;
			break;
		}
	}

	
	printf("%d\n",n - i);
	return 0;
} 