#include <stdio.h>
#include <algorithm>
#include <iostream>

using namespace std;

int main(){
	int n,x;
	cin >> n ;
	int l = 1;
	int r = n;

	int left[n];
	int right[n];

	for(int i = 0; i < n;i++){
		left[i] = 0;
		right[i] = 0;
	}

	for(int i = 0; i < n ;i++){
		scanf("%d",&x);
		if(x == 0){
			left[i] = l;
			l++;

		}else{
			right[i] = r;
			r--;	
		} 
	}

	
	
	return 0;
}