#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf 1e9
#define INF 1e18
#define mod 10000007
#define MOD 998244353



int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;

    vector<int> v(n + 1);
    ll ans = -1;
    ll sum = 0;
    ll p = -1;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];

        if(v[i] > n-k){
            if(p!=-1){
                ans = 1LL * ans * (i - p) % MOD;
            }
            p = i;
            sum += v[i];
        }
    }

    cout << sum << " " << abs(ans) << endl;
}