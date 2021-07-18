#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf 1e9
#define INF 1e18
#define mod 10000007
#define MOD 1000000000

int height[100004];
int dp[100004];

int bottomUp(int n){



    dp[1] = 0;

    // cout<<dp[0] << endl;
    dp[2] = abs(height[2] - height[1]);
    for(int i=3;i<=n;i++){
        dp[i] = min(dp[i-1] + abs(height[i] - height[i-1]), dp[i-2] + abs(height[i] - height[i-2]));
    }

    return dp[n];
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin>>n;

    for(int i=1;i<=n;i++){
        cin>>height[i];
    }

    cout<<bottomUp(n)<<endl;

    
}