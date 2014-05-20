#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int n,p,k;
	cin >> n >> p >> k;
	// int a = p - k;
	vector<int> a;
	int b = p - k;
	for(int i = 0; i < 2*k+1;i++){
		if(b < 1 || b > n){
			// continue;
		}
		else a.push_back(b);
		b++;
	}
	// for(i = 0; i < a.length(); i++){
	// 	if(a[0] == 1){
	// 		cout << 1 << " ";
	// 		for(i )
	// 	}else{

	// 	}
	// }
	if(a[0] == 1){

		for(int i = 0; i < a.size(); i++){
			if(a[i] == p) 
				cout << "(";
			cout << a[i];
			if(a[i] == p) 
				cout << ")";
			cout << " ";
		}
		if(a[a.size()- 1]== n){
			cout << endl;
		}else{
			cout << ">>" << endl;
		}
	}else{
		cout << "<< ";
		for(int i = 0; i < a.size(); i++){
			if(a[i] == p) 
				cout << "(";
			cout << a[i];
			if(a[i] == p) 
				cout << ")";
			cout << " ";
		}
		if(a[a.size() - 1]== n){
			cout << endl;
		}else{
			cout << ">>" << endl;
		}
	}

	return 0;
}