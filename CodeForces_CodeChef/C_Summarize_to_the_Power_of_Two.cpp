#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf 1e9
#define INF 1e18
#define mod 10000007
#define MOD 1000000000
const int m = 1000000007;

map<int, int> mp;

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> v(n);

    for (int &x : v){
        cin >> x;
        mp[x]++;
    }

    int ans = 0;
    // 10 ^ 9 => 32 bits
    for (int i = 0; i< n;  i++){
        bool ok = false;

        for (int j = 0; j < 32; j++){
            int x = (1 << j) - v[i];
            if(mp.count(x) and (mp[x] > 1 || (mp[x]==1 && x != v[i]))){
                ok = true;
            }
        }
        if(!ok){
            ans++;
        }
    }
    cout << ans << endl;
}