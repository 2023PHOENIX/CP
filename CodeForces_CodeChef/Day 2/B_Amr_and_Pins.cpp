#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf 1e9
#define INF 1e18
#define mod 10000007
#define MOD 1000000000

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    double r,x,y,x0,y0;    cin>>r>>x>>y>>x0>>y0;

    double distn = sqrt((x-x0)*(x-x0) + (y-y0)*(y-y0));

    cout<<ceil(distn/(2*r));
    return 0;
    
}