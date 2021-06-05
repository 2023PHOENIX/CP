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
    ll t;  cin>>t;

    vector<ll> v(n);
    for(auto &x : v)cin>>x;


    ll strt = 0;
    ll result = 0;
    ll sum = 0;
    for(int i=0;i<v.size();i++){
        
        if(sum+v[i] > t){
            while(strt<i and sum + v[i] > t){
                sum -= v[strt];

                strt++;
            }

        }

        sum+= v[i];

        if(sum <= t){
            result = max(result,i-strt+1);
        }
    }

    cout<<result<<"\n";

    return 0;

    


}