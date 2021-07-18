#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf 1e9
#define INF 1e18
#define mod 1000000
#define MOD 1000000000

const int m = 1000000007;


int dp[22][1 << 22];

int matching(vector<vector<int>> &comp, int i, int mask,int n)
{
    if(i== n+1){
        // all the womens are matched with mens
        if(mask==0){
            return 1;
        }else{
            return 0;
        }
    }
    if(dp[i][mask]!=-1){
        return dp[i][mask];
    }

    int ans = 0;

    for (int w = 0; w < n;w++){
        bool available = (((1 << w) & (mask == 0)) ? 0 : 1);

        if(available and comp[i][w + 1]==1){
            ans = ((ans % m) + (matching(comp, i + 1, mask ^ (1 << w), n) % m)) % m;
        }
    }

    return dp[i][mask] = ans;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<vector<int>> comp(n + 1, vector<int>(n + 1));

    memset(dp, -1, sizeof dp);

    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= n;j++){
            cin >> comp[i][j];
        }
    }

    cout << matching(comp, 1, (1 << n) - 1, n);
}

