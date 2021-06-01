
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

    int n,l;    cin>>n>>l;

    vector<ll> v(n);
    for(auto &x : v)cin>>x;
    sort(v.begin(),v.end());

    ll r = max(v[0],l-v[n-1])*2;

    for(int i=0;i<n-1;i++){
        r = max(r,v[i+1]-v[i]);
    }

    cout<<setprecision(10)<<fixed<<r/2.0<<endl;

}