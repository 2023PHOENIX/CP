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

    int n, x, y;
    cin >> n >> x >> y;

    vector<int> v(n);
    
    for(auto &x : v){
        cin >> x;
    }

    if(x > y){
        cout << n << endl;
    }else{
        int cnt = 0;
        for(auto &s : v){
            if(s <= x){
                cnt++;
            }
        }

        cout << (cnt + 1) / 2 << endl;
    }

    return 0;
}