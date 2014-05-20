#include <stdio.h>
#include <algorithm>
#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int x, a[n+1],b[n+1];

	for(int i = 0; i < n; i++){
		cin >> x;
		a[i] = x;
		b[i] = 1;
	}

	sort(a,a+n);

	// for(int i = n-1; i >= 0; i--){

	// }

	int count = 0;
	int col = 0;
	int strength = a[n-1];
	while(count < n){
		int i = n-2;
		int num = 0;
		while(1){
			printf("%d\n",a[i]);
			if(b[i] == 1){
					strength = min(a[i],strength - 1);
					if(strength < 0) break;
					b[i] = -1;
					count++;

					if(i == 0)
						break;
					i--;
							
			}else{
				if(i == 0)
					break;
				i--;
			}	
		}
		col++;
	}


	cout << col;
	return 0;
}