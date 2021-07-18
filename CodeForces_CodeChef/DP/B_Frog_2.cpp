#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf 1e9
#define INF 1e18
#define mod 10000007
#define MOD 1000000000

void solve(vector<int> v,int n,int k){
    int dp[n + 1];

    dp[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = inf;
        for (int j = i - 1; j >= 1 and i - j <= k; j--)
        {
            dp[i] = min(dp[i], abs(v[i] - v[j]) + dp[j]);
        }
    }

    cout << dp[n] << endl;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;    cin>>n>>k;

    vector<int> v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }

    solve(v,n,k);

   
}