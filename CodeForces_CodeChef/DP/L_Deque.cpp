#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf 1e9
#define INF 1e18
#define mod 10000007
#define MOD 1000000000

ll arr[3001];

ll n;

ll dp[3001][3001];

ll _deque(int i,int j){
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(i==j){
        return dp[i][j] = arr[i];
    }

    return dp[i][j] = max(arr[i] - _deque(i + 1, j), arr[j] - _deque(i, j - 1));
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    memset(dp, -1, sizeof dp);

    ll rst = _deque(0, n - 1);
    cout << rst << endl;
}