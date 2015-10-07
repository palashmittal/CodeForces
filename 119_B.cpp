// #include <stdio.h>
// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main()
// {
// 	int n,a,b,c;
// 	cin >> n >> a >> b >> c;
// 	int arr[4001];

// 	int i=0;
// 	for(i=0;i<n+1;i++)
// 	{
// 		arr[i]=0;
// 	}
// 	arr[0]=1;
// 	for(i=0;i+a<=n;i++)
// 	{
// 		if(arr[i]!=0)
// 		{
// 			arr[i+a]=arr[i]+1;
// 		}
// 	//	printf("arr: %d\n",arr[i+a]);
// 	}

// 	for(i=0;i+b<=n;i++)
// 	{
// 		if(arr[i]!=0)
// 			arr[i+b]=max(arr[i]+1,arr[i+b]);
// 	}

// 	for(i=0;i+c<=n;i++)
// 	{
// 		if(arr[i]!=0)
// 			arr[i+c]=max(arr[i]+1,arr[i+c]);
// 	}

	
// 	cout << arr[n] - 1<< endl;

// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector <int> vi;
typedef pair <int,int> pii;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define sz(a) (int)a.size()
#define all(c) c.begin(), c.end()
#define rep(i, n) for(int i = 0; i < (n); i++)
#define rept(i, a, b) for(int i = (a); i < (b); i++)
#define fill(a, v) memset(a, v, sizeof(a))
#define foreach(c, it) for(__typeof(c.begin()) it = c.begin(); it != c.end(); ++it)

int main(){
	int w,h;
	cin >> w >> h;
	ll ans = 0;
	for(int i = 2; i <= w; i+=2){
		for(int j = 2;j <= h; j+=2){
			ans += (w - i + 1)*(h - j + 1);
		}
	}
	cout << ans << endl;

	return 0;
}