#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf 1e9
#define INF 1e18
#define mod 10000007
#define MOD 1000000000
const int m = 1000000007;

vector<ll> graph[1000 * 1000 + 5];
bool visited[1000005];
ll arr[100005];

ll dfs(ll src){
    visited[src] = true;

    ll ans = arr[src];
    for (auto &u : graph[src])
    {
        if(!visited[u]){
            ans = min(ans, dfs(u));
        }
    }

    return ans;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    int x, y;   
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if(!visited[i]){
            ans += dfs(i);
        }
    }

    cout << ans << endl;
}