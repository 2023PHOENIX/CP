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

    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    for (int i = 0; i <= 25; i++){
        for (int j = 0; j < n and k > 0; j++){
            if(s[j] == 'a' + i){
                k--;
                s[j] = '0';
            }
        }
    }

    for(auto &x : s){
        if(x!='0'){
            cout << x;
        }
    }
}