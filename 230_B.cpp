#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n+1][n+1];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}

	float b[n+1][n+1],c[n+1][n+1];
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			if(i == j){
				b[i][j] = a[i][j];
				c[i][j] = 0;
			}
			else{
				// if(a[i][j]%2 == 0){
					b[i][j] = b[j][i] = (float)(a[i][j] + a[j][i])/2;
					c[i][j] = b[i][j] - a[j][i];
					c[j][i] = -c[i][j];
			}
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << b[i][j] << " ";
		}	
		cout << endl;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << c[i][j] << " " ;
		}	
		cout << endl;
	}
	return 0;
}