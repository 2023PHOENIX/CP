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

    int n;  

    while(true){
        cin >> n;
        if (n == -1)
        {
            break;
        }

        vector<ll> v(n);

        ll max_load = 0;
        for (auto &x : v){
            cin >> x;
            max_load += x;
        }

        if(max_load % n != 0){
            cout << -1 << endl;
            continue;
        }
        ll result = 0;
        max_load /= n;

        ll diff = 0;
        for (int i = 0; i < n; i++)
        {
            diff += v[i] - max_load;
            result = max(result, abs(diff));
        }

        cout << result << endl;
    }
}