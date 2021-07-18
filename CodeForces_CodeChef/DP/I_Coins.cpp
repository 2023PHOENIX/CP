#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf 1e9
#define INF 1e18
#define mod 10000007
#define MOD 1000000000

double p[3000];

double dp[3000][3000];

double f(int n,int x){

    for (int i = 0; i <=x;i++){
        dp[0][i] = 0;
    }
    for (int i = 0; i <= n;i++){
        dp[i][0] = 1;
    }

    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= x;j++){
            dp[i][j] = dp[i - 1][j - 1] * p[i] + dp[i - 1][j] * (1 - p[i]);
        }
    }

    return dp[n][x];
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 1; i <= n;i++){
        cin >> p[i];
    }

    memset(dp, 0.0, sizeof dp);
    cout << fixed << setprecision(10) << f(n, (n + 1) / 2);
}