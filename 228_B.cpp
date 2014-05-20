#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n+2][n+2];
	char c;

	for(int i = 0; i <= n+1 ; i++)
		for(int j = 0; j <= n+1;j++){
			a[i][j] = -1;
		}

	int count = 0;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++){
			cin >> c;
			if(c == '.') a[i][j] = 0;
			else {
				a[i][j] = 1;
				count++;
			}
		}

	int flag = 0;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			if(a[i][j] == 1){
				if(a[i+1][j] == 1 && a[i+1][j+1] == 1 && a[i+1][j-1] == 1 && a[i+2][j] == 1){
					a[i][j] = -1;
					a[i+1][j] = -1;
					a[i+1][j+1] = -1;
					a[i+1][j-1] = -1;
					a[i+2][j] = -1;
					flag = 0;
				}else{
					flag = -1;
					break;
				}
			}
		}
		if(flag == -1){
			printf("NO\n");
			return 0;
		}
	}
	if(flag == 0)
		printf("YES\n");

	return 0;
} 