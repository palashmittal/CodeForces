#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>


using namespace std;

int main(){
	int n, m, g, s,minG = 999999;
	int maxS = -1;
	char x;
	set<int> v;
	cin >> n >> m;
	int a[m+1];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> x;
			a[j] = 0;
			if(x == 'G') g = j;
			if(x == 'S') s = j;
		}
		if(g > s){
			cout << -1 << endl;
			return 0;
		}
		else
			v.insert(s-g);
	}
	cout << v.size() << endl;
	return 0;
}