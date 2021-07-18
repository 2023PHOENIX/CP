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

   ll result = 0;

    for (int i = 1; i <= n;i++){
        result += pow(2, i);
        // cout << pow(2, i) << endl;
    }

    cout << result << endl;
}