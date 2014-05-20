#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	string s;
	cin >> s;
	int arr[10];
	// for(int i = 0; i < 10; i++){
	// 	arr[i] = 0;
	// }
	int countN = 0, countI = 0, countE = 0, countT = 0;
	// int num[30];
	for(int i = 0; i < s.length() ; i++){
		if(s[i] == 'n')
			countN++;
		else if(s[i] == 'i')
			countI++;
		else if(s[i] == 'e')
			countE++;
		else if(s[i] == 't')
			countT++;
	}

	// countN /= 3;
	if(countN % 2 == 0 && countN != 0){
		countN = countN / 2 - 1;
	}else countN /= 2;
	countE /= 3;

	int ans = min(countN,min(countI,min(countE,countT)));
	cout << ans << endl;
	return 0;
}