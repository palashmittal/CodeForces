// #include <iostream>

// using namespace std;

// int main(){
// 	long long int n,m,a;
// 	cin >> n >> m >> a;
// 	int x,y;
// 	if(n%a == 0){
// 		x = n/a;
// 	}else x = n/a + 1;
// 	if(m%a == 0){
// 		y = m/a;
// 	}else y = m/a + 1;
// 	unsigned long long int ans = x*y;
// 	cout << ans;
// 	return 0;
// }

#include <iostream>

using namespace std;

int main(){
    long long int n,m,a;
    cin >> n >> m >> a;
    unsigned long long int ans = (n/a + (n%a == 0?0:1))*(m/a + (m%a==0?0:1));
    cout << ans;
    return 0;
}