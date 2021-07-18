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

    string a, b;
    cin >> a >> b;

    int i = 0, j = 0;

    if(a.length()!=b.length()){
        cout << -1 << endl;
        return 0;
    }

    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if(a[i]!=b[i] and b[i+1] != a[i+1] and a[i] != a[i+1]){
            swap(a[i], a[i + 1]);
            ans++;
        }
    }

    for (int i = 0; i < n;i++){
        if(a[i]!=b[i]){
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}