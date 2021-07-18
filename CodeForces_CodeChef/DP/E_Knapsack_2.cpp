#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 1e9
#define INF 1e18
#define mod 10000007
#define MOD 1000000000



ll minWt(ll *weight,ll *profit,ll W,ll n){

    ll pf =0;
    for(ll i=1;i<=n;i++){
        pf += profit[i];
    }
    ll dp[n+1][pf+1];

    for(ll i=0;i<=pf;i++){
        dp[1][i] = inf;
    }

    dp[1][profit[1]] = weight[1];
    dp[1][0] = 0;

    for(ll i=2;i<=n;i++){

        for(ll j=1;j<=pf;j++){
            dp[i][j] = dp[i-1][j];
            if(profit[i] > j)
            {
                continue;
            }
  
            dp[i][j] = min(dp[i][j],dp[i-1][j-profit[i]] + weight[i]);
            
        }
    }

    ll result = 0;

    // for (ll i = 1; i <= pf; i++)
    // 
    //     if (dp[n][i] <= W)
    //     {
    //         cout<<i<<"->"<<dp[n][i]<<" ";
    //     }
    // }

    for(ll i=1;i<=pf;i++){
        if(dp[n][i]<= W){
            result = i;
        }
    }

    return result;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    ll n,W;    cin>>n>>W;

    ll profit[n+1];
    ll weight[n+1];
    for(ll i=1;i<=n;i++){
        cin>>weight[i]>>profit[i];
    }
    cout<<minWt(weight,profit,W,n);

}