#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf 1e9
#define INF 1e18
#define mod 10000007
#define MOD 1000000000
const int m = 1000000007;

vector<int> graph[10001];

ll dp[100005][2];

ll independentSet(int node,int parent,int c){
    if(dp[node][c]!=-1)
        return dp[node][c];

    ll ans = 0;
    ll w0 = 1;

    for(auto &child : graph[node]){
        if(child!=parent){
            w0 = ((w0 % mod) * independentSet(child, node, 0)%mod)%mod;
        }
    }
    ans += w0;

    if(not c){
        ll w1 = 1;
        for (auto child : graph[node]){
            if(child != parent)
            w1 = ((w1 % mod) * independentSet(child, node, 1)%mod)%mod;
        }

        ans += (ans%mod + w1%mod)%mod;
    }

    return dp[node][c] = ans;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    memset(dp, -1, sizeof dp);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    cout << independentSet(1, -1, 0);
}