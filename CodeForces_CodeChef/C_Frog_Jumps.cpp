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
    cin >> n;

    while(n--){
        string s;
        cin >> s;

        int max_L = 0;

        int curr_max = 0;

        for(auto &x : s){
            if(x=='L'){
                curr_max++;
            }else{
                curr_max = 0;
            }

            max_L = max(max_L, curr_max);
        }

        cout << max_L + 1 << endl;
    }
}