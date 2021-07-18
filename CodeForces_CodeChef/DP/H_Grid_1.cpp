#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
#define inf 1e9
#define INF 1e18
// #define mod 10000007
#define MOD 1000000000

const long mod = 1000000007;
char grid[1001][1001];

void solve(){
    ll n, m;
    cin >> n >> m;

    for (ll i = 1; i <= n;i++){
        for (ll j = 1; j <= m;j++){
            cin >> grid[i][j];
        }
    }

    ll dp[1001][1001];

    dp[1][1] = 1;

    for (ll i = 1; i <= n; i++){
        for (ll j = 1; j <= m;j++){
            if(i==1 and j==1){
                continue;
            }
            if(grid[i][j]=='#'){
                dp[i][j] = 0;
                continue;
            }
        
        dp[i][j] = (dp[i-1][j]%mod + dp[i][j-1]%mod)%mod;

        }
    }
    // for (ll i = 0; i <= n;i++){
    //     for (ll j = 0; j <= m;j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
        cout << dp[n][m]%mod;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}