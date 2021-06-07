#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf 1e9
#define INF 1e18
#define mod 10000007
#define MOD 1000000000

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, m;
    cin >> N >> m;
    int x, y;
    bool graph[N + 1];
    memset(graph, N + 1, false);
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        graph[x] = graph[y] = true;
    }

    for (int i = 1; i <=N; i++)
    {
        if (!graph[i])
            break;

        for (int j = 1; j <=N; j++)
        {   
            
            if(i!=j and graph[i]!=graph[j])
                cout<<i<<" "<<j<<endl;
        }
    }
}