#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf 1e9
#define INF 1e18
#define mod 10000007
#define MOD 1000000000
const int m = 1000000007;

map<ll, ll> visited;
ll n;

ll ans = 0;
void dfs(int x)
{
    if(n < x){
        return;
    }
    if(visited[x]){
        return;
    }

    ans++;
    visited[x] = true;
    dfs(x*10);
    dfs(x*10 + 1);
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    
    cin >> n;

    dfs(1);

    cout << ans << endl;
}