#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf 1e9
#define INF 1e18
#define mod 10000007
#define MOD 1000000000
const int m = 1000000007;

unordered_map<string, int> mp;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(mp.find(s)!=mp.end()){
            cout << s << mp[s] << endl;
        }else{
            cout << "OK" << endl;
        }

        mp[s]++;
    }
}