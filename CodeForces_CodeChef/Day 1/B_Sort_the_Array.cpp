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

    int n;  cin>>n;

    vector<ll> v(n);
    for(auto &x : v)cin>>x;

    int cnt = 0 ;

    for(int x=1;x<v.size();x++){
        if(v[x-1] > v[x])
            cnt++;
    }

    (cnt==n-1 || cnt==1)?cout<<"yes":cout<<"no";
    return 0;


}