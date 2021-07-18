#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
#define inf 1e9
#define INF 1e18
#define mod 1000000007
#define MOD 1000000000

ll sum[401][401];
ll dp[401][401];
ll arr[401];

ll n;


ll Slimes(ll i,ll j){
    if(i==j){
        return 0;
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }

    ll minCst = INF;
    for (ll x = i; x < j; x++)
    {
        minCst = min({minCst, (Slimes(i, x)%mod + Slimes(x + 1, j)%mod + sum[i][j]%mod)%mod});
    }

    return dp[i][j] = minCst;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    memset(dp, -1, sizeof(dp));
    memset(sum, 0, sizeof(sum));

   
    for (ll i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = i; j <= n; j++)

            sum[i][j] = arr[j] + ((i == j) ? 0 : sum[i][j - 1]);
    }

    // cout << Slimes(1, n) << endl;

    // for (int i = 0; i <= n;i++){
    //     for (int j = 0; j <= n;j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}