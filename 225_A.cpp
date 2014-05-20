#include <stdio.h>
#include <algorithm>


using namespace std;

int main(){
	int n;
	scanf("%d",&n);

	int t = n*n;
	int row = 1;
	if(n%2 == 0){
		printf("%d\n",n*n/2);
		for(int i = 1;i <= t;i++){
			if(row % 2 == 0){
				if(i%2 == 1){
					printf(".");
				}else printf("C");
			}
			else{
				if(i%2 == 0){
					printf(".");
				}else printf("C");
			}
			if(i% n == 0) {
				printf("\n");
				row++;
			}
		}
	}
	else{
		printf("%d\n",(n/2 + 1)*(n/2 +1) + (n/2)*(n/2));
		row = 1 ;
		for(int i = 1;i <= t;i++){
			if(row % 2 == 1){
				if(i%2 == 1){
					printf("C");
				}else printf(".");
			}
			else{
				if(i%2 == 0){
					printf(".");
				}else printf("C");
			}
			if(i % n == 0){
				row++;
				printf("\n");
			} 
		}
	}
	return 0;
}