#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;

int main(){

	int n,m,k;
	cin >> n >> m >> k;

	// int a[n][m];
	int x;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> x;


	// vector < pair < int, int > > p;

		cout << (m*(m-1))/2 << endl;

		for(int j = 1; j < m; j++){
			for(int l = j + 1; l <= m;l++){
				if(k == 0)
					cout << j << " " << l << endl;
				else if (k == 1) cout << l << " " << j << endl;
			}
		}

	return 0;
}