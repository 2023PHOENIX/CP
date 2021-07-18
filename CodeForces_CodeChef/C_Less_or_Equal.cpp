#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf 1e9
#define INF 1e18
#define mod 10000007
#define MOD 1000000000
const int m = 1000000007;


int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k;
    cin >> n >> k;

    
    vector<ll> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
 
    if(k==0){
        if(v[0] == 1){
            cout << -1 << endl;
        }else{
            cout << v[0] - 1 << endl;
        }

    }else if(k==n){
        cout << v[k - 1] << endl;
    }else{
        if(v[k] == v[k-1]){
            cout << -1 << endl;
        }else{
            cout << v[k - 1] << endl;
        }
    }
}