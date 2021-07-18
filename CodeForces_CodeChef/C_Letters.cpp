#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define inf 1e9
#define INF 1e18
#define mod 10000007
#define MOD 1000000000
const int m = 1000000007;


int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;

    ll arr[n + 1];



    for (ll i = 1; i <= n;i++){
        cin >> arr[i];
    }

    ll sum = 0;
    ll i = 1;
    while (m--)
    {
        ll x;
        cin >> x;

        while(arr[i] + sum < x){
            sum += arr[i++];
        }
        cout << i << " " << x - sum << endl;
    }
}