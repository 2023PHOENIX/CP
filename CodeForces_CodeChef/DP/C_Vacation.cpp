#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf 1e9
#define INF 1e18
#define mod 10000007
#define MOD 1000000000

struct activity{
    int a,b,c;
};

void solve(vector<activity> v,int n){
    int dp[n+1][3];

    dp[1][0] = v[1].a;
    dp[1][1] = v[1].b;
    dp[1][2] = v[1].c;


    for(int i=2;i<=n;i++){
       dp[i][0] = v[i].a + max(dp[i-1][1],dp[i-1][2]);
       dp[i][1] = v[i].b + max(dp[i-1][0],dp[i-1][2]);
       dp[i][2] = v[i].c + max(dp[i-1][0],dp[i-1][1]); 
    }
    cout<<max({dp[n][0] , dp[n][1],dp[n][2]});
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin>>n;

    vector<activity> v(n + 1);

    for(int i=1;i<=n;i++){
        int x,y,z;  cin>>x>>y>>z;

        v[i].a = x;
        v[i].b = y;
        v[i].c = z;
    }

    solve(v,n);


    return 0;






    
    
}