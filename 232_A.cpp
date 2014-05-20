#include <stdio.h>
#include <iostream>
#include <algorithm>
// #include <pair>

using namespace std;

int main(){
	int n,x;
	cin >> n;

	pair<int,int> a[n+1];
	for(int i = 0; i < n; i++){
		cin >> x;
		a[i].first = x;
		cin >> x;
		a[i].second = x;
		// cout << a[i].second;
	}
	sort(a+1,a + n);

	int min1 = 999, min2 = 999,min3 = 999;
	int sum = a[1].first - a[0].first;
	// for(int i = 1;i < n; i++){
	// 	if(a[i].first <= a[0].first && a[i].second <= a[0].second && a[i].second >= a[0].first)
	// 	{
	// 		// sum = a[0].first - a[i].first + a[0].second - a[i].second;
	// 		sum = a[0].second - a[i].second;
	// 		if(min1 > sum){
	// 			min1 = sum;
	// 		}
	// 	}else if(a[i].first >= a[0].first && a[i].second >= a[0].second && a[i].first <= a[0].second){
	// 		// sum = a[i].first - a[0].first + a[i].second - a[0].second
	// 		sum = a[i].first - a[0].first;
	// 		if(min2 > sum){
	// 			min2 = sum;
	// 		}
	// 	}else{
	// 		sum = a[i].first - a[0].first + a[0].second - a[i].second;
	// 		if(min3 < sum){
	// 			min3 = sum;
	// 		}
	// 	}
	// }


	for(int i = 1; i < n; i++){
		if(a[i].second <= a[0].first){
			ans = a[0].second - a[0].first;
		}
		if(a[i].first <= a[0].second || a[i].second <= a[0].second){
			if
		}
	}



	if(min1 >= 200 ){
		min1 = 0;
	}
	if(min2 >= 200){
		min2 = 0;
	}
	if(min3 >= 200){
		min3 = 0;
	}


	int ans = min1 + min2 + min3;
	cout << ans << endl;
	return 0;
}