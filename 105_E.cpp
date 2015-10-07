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
    int n,m;
    cin >> n >> m;

    vi ans(m + 2,0);
    ans[0] = 0;
    int l;
    rep(i,n){

        cin >> l;

        vi a(l+1), left(l + 1,0),right(l + 2,0);

        for(int j = 1; j <= l;j++){
            cin >> a[j];
            left[j] = left[j-1] + a[j];
        }
        for(int j = l; j >0;j--){
            right[j] = right[j + 1] + a[j];
        }
       
        vi dp(l + 1,0);

        for(int j = 1; j <= l; j++){
            for(int k = 0; k <= j; k++){
                // cout << dp[j] << " " << left[k] << " " << right[l - j + k + 1] << endl;
                dp[j] = max(dp[j], left[k] + right[l - j + k + 1]);
            }
        }
        for(int j = m; j > 0; j--){
            for(int k = 1; k <= l && k <= j; k++){
                // cout << ans[j] << " " << ans[j - k]<< " " << dp[k] << "  "<< j << " " << k << endl;
                ans[j] = max(ans[j],ans[j - k] + dp[k]);
                
            }
        }
    }
    cout << ans[m] << endl;

    return 0;
}