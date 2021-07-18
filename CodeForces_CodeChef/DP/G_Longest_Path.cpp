#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf 1e9
#define INF 1e18
#define mod 10000007
#define MOD 1000000000


ll dp[1000001];


ll LPath(vector<ll> graph[],ll src){
    
    
    
    if(dp[src]!=-1){
        return dp[src];
    }

    ll result = INT_MIN;

    bool flag = true;

    for(auto &x : graph[src]){
        flag = false;
        result = max(result, LPath(graph, x) + 1);
    }

    dp[src] =  (!flag)?result:0;

    return dp[src];
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    ll v,e; cin>>v>>e;

    vector<ll> graph[100001];
    memset(dp, -1, sizeof dp);
    while (e--)
    {
        ll a, b;
        cin >> a >> b;

        graph[a].push_back(b);
    }
    ll result = 0;

    for (ll i = 1; i <= v;i++){
        result = max(result, LPath(graph,i));
    }

    cout << result << endl;

    return 0;
}