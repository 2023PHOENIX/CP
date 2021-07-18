#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define inf 1e9
#define INF 1e18
#define mod 10000007
#define MOD 1000000000



// ll KnapSack(ll wt[],ll profit[],ll n,ll W){
//     if(n==-1){
//         return 0;
//     }
//     if(W==0){
//         return 0;
//     }

//     ll result = 0;

//     if(W >= wt[n]){
//         result = max(KnapSack(wt,profit,n-1,W),KnapSack(wt,profit,n-1,W-wt[n]) + profit[n]);
//     }
//     else{
//         result = KnapSack(wt,profit,n-1,W);
//     }

//     return result;
// }

ll BottomUp(ll wt[],ll profit[],ll n,ll W){

    ll dp[2][W+1];

    for(int i=0;i<=W;i++){
        dp[0][i] = 0;
    }
    dp[0][wt[1]] = profit[1];
   
    for(int i=1;i<=n;i++){
        for(int j=0;j<=W;j++){
            dp[1][j] = dp[0][j];

            if(j >= wt[i]){
                dp[1][j] = max(dp[1][j],profit[i] + dp[0][j-wt[i]]);
            }
        }
    for(int i=0;i<=W;i++){
        dp[0][i] = dp[1][i];
        dp[1][i] = 0;
    }
    }

   ll result = 0;

   for(int i=1;i<=W;i++){
       result = max(result,dp[0][i]);
   }

   return result;
}
// ll BottomUp(ll wt[],ll profit[],ll n,ll W){

//     ll dp[n+1][W+1];

//     for(int i=0;i<=W;i++){
//         dp[1][i] = 0;
//     }
//     dp[1][wt[1]] = profit[1];
   

//    for(int i=2;i<=n;i++){
//        for(int j=0;j<=W;j++){
//            dp[i][j] = dp[i-1][j];

//            if(j >= wt[i]){
//                dp[i][j] = max(dp[i][j],dp[i-1][j-wt[i]] + profit[i]);
//            }
//        }
//    }

//    ll result = 0;

//    for(int i=1;i<=W;i++){
//        result = max(result,dp[n][i]);
//    }

//    return result;
// }

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    ll n,weight;   cin>>n>>weight;

    ll wt[n];
    ll profit[n];
    
    for(ll i=1;i<= n;i++){
        cin>>wt[i]>>profit[i];
    }

    // cout<<KnapSack(wt,profit,n-1,weight);
    cout<<BottomUp(wt,profit,n,weight);
    
}