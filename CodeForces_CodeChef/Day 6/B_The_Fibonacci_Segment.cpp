#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf 1e9
#define INF 1e18
#define mod 10000007
#define MOD 1000000000

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a)
        cin >> x;
    

    if(n<=2){
        cout<<n<<endl;
        return 0;
    }

    ll maxlen = 2;
    ll l{0},r{0};
    for(int i=2;i<n;i++){
        if(a[i] == a[i-1] + a[i-2]){
             r = i;

             if(maxlen < r - l + 1){
                 maxlen = r - l + 1;
             }
        }
        else{
            l = i - 1;
        }
    }

    cout<<maxlen<<endl;
}
