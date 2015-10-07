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
    int m,s;
    cin >> m >> s;
    if(s == 0){
        if(m == 1){
            cout << 0 << " " << 0 << endl;
        }else if(m > 0){
            cout << -1 << " " << -1 << endl;
        }
        return 0;
    }
    string min, max;
    int copy = s;
    for(int i = 0; i < m; i++){
        int num = std::min(9,copy);
        max += (char)('0' + num);
        copy -= num;
    }
    if(copy > 0){
        cout << -1 << " " << -1 << endl;
        return 0;
    }

    copy = s - 1;
    for(int i = 0; i < m; i++){
        int num = std::min(9,copy);
        min += (char)('0' + num);
        copy -= num;
    }
    reverse(min.begin(), min.end());
    if(min[0] == '0'){
        min[0] = '1';
    }else{
        for(int i = m-1; i >= 0; i--){
            if(min[i] != '9'){
                min[i] ++;
                break;
            }
        }
    }

    cout << min << " " << max << endl;

    return 0;
}
