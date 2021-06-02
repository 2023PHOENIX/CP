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

    int n,m;    cin>>n>>m;

    map<string,string> mp;
    string a,b;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        mp[a] = b;
    }

    vector<string> vs(n);

    for(auto &x : vs){
        cin>>x;
        if(mp[x].length() < x.length()){
            cout<<mp[x]<<" ";
        }else{
            cout<<x<<" ";
        }
    }


}