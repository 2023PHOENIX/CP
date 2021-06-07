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

    ll n,m;    cin>>n>>m;

    set<ll> s;
    ll d;
    for(ll i=0;i<m;i++){
        cin>>d;
        s.insert(d);
    }    

    int prev = -1;
    int cnt = 0;
    int isPossible = true;
    for(auto &i : s){
        // cout<<i<<" ";
        if(prev+1 == i){
            cnt++;
        }
        else{
            cnt = 0;
        
        }

        prev = i;
        if(i==1){
            isPossible=false;
            break;
        }
        if(cnt==2){
            isPossible = false;
            break;
        }        
        if(i==n){
            isPossible = false;
            break;
        }
    }

    (isPossible)?cout<<"YES":cout<<"NO";
}