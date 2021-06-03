#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf 1e9
#define INF 1e18
#define mod 10000007

int MOD = 1000000007;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    ll x,y,n;   cin>>x>>y>>n;

    ll v[] = {x,y,y-x,-x,-y,x-y};

    cout<<(v[(n-1)%6]%MOD + MOD)%MOD;
    return 0;
}