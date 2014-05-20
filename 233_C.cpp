#include <iostream>

using namespace std;

int main(){
	int a , b;
	cin >> a >> b;
	long long int ans = 0;
	if(a == 0){
		cout << -(b)*(b) << endl;
		for(int i = 0; i < b; i++){
			cout << "x" ;
		}
	}else if ( a == b){
		cout << 0 << endl;
		for(int i = 0; i < a; i++){
			cout << "o" << "x";
		}
	}else if( a < b){
		ans = (b % a)*(b%a);
		ans += a*(b/a)*(b/a) - a;
		long long int t = -ans;
		if(t > a*a - (b/2)*(b/2) - (b-b/2)*(b-b/2)){
			cout << "-" << ans << endl;
			for(int i = 0; i < b%a; i++){
				cout << "x";
			}
			for(int i = 0; i < a + b -b%a; i++){
				if(i%a == 0) cout << "ox";
				else cout << "x";
			}
		}else{
			cout << a*a - (b/2)*(b/2) - (b-b/2)*(b-b/2) << endl;
			for(int i = 0; i < b - b/2;i++){
				cout << "x";
			}
			for(int i = 0; i < a; i++){
				cout << "o";
			}
			for(int i = 0; i < b/2;i++){
				cout << "x";
			}
		}
		

	}else{
		cout << a*a - (b/2)*(b/2) - (b-b/2)*(b-b/2) << endl;
		for(int i = 0; i < b - b/2;i++){
			cout << "x";
		}
		for(int i = 0; i < a; i++){
			cout << "o";
		}
		for(int i = 0; i < b/2;i++){
			cout << "x";
		}
	}
	return 0;
}