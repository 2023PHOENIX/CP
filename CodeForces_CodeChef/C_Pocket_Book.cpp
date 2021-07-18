#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf 1e9
#define INF 1e18
#define mod 10000007
#define MOD 1000000000
const int m = 1000000007;

void solve(){
    int n, m;
    cin >> n >> m;

    set<int> distinctChar[m];

    for (int i = 0; i < n;i++){
        string s;
        cin >> s;
        for (int j = 0; j < s.length();j++){
            distinctChar[j].insert(s[j]);
        }
    }
    const int modulo = 1e9 + 7;

    ll result = 1;

    for (int i = 0; i < m;i++){
        result = (result * distinctChar[i].size())%modulo;
    }

    cout << result << endl;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}