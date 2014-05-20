#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(){
	int t;
	string s;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> s;
		int count = 0;
		int num = 0;
		int flag1 = 0,flag2 = 0, flag3 = 0, flag4 = 0, flag6 = 0, flag12 = 0;
		for(int j = 0; j < 12; j++){
			if(s[j] == 'X')
				count++;
		}

		if(count == 0){
			cout << 0 << endl;
			flag1 = 0;
			continue;
		}else {
			num++;
			flag12 = 1;
		}

		if(count == 12){
			num++;
			flag1 = 1;
		}

		count = 0;
		for(int j = 0; j < 6; j++){
			if(s[j]=='X' && s[j+6] == 'X'){
				count++;
			}
		}
		if(count != 0){
			flag6 = 1;
			num++;
		}
			


		count = 0;
		for(int j = 0; j < 4; j++){
			if(s[j] =='X' && s[j+4] == 'X' && s[j+8]=='X'){
				count++;
				// cout << "palash";
			}
		}
		if(count != 0){
				flag4 = 1;
				num++;
			}

		count = 0;
		for(int j = 0; j < 3; j++){
			if(s[j]=='X' && s[j+3]== 'X' && s[j+6]=='X' && s[j+9]=='X'){
				count++;
			}
		}
		if(count != 0){
				flag3 = 1;num++;
			}

		count = 0;
		for(int j = 0; j < 2; j++){
			if(s[j]=='X' && s[j+2]== 'X' && s[j+4]=='X' && s[j+6]=='X' && s[j+8] == 'X' && s[j+10] == 'X'){
				count++;
			}
		}
		if(count != 0)
			{
				num++;
				flag2 = 1;
			}


		cout << num << " ";
		if(flag12 == 1)
			cout << "1x12 ";
		if(flag6 == 1)
			cout << "2x6 ";
		if(flag4 == 1)
			cout << "3x4 ";
		if(flag3 == 1)
			cout << "4x3 ";
		if(flag2 == 1)
			cout << "6x2 ";
		if(flag1 == 1)
			cout << "12x1 ";
		cout << endl;


	}
}