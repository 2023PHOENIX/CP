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

    int q;
    cin >> q;

    while(q-- > 0 ){

        ll c, m, x;
        cin >> c >> m >> x;

        if(c==0 || m==0 || c+ m + x < 3){
            cout << 0 << "\n";
        }
        else if(c <= m and c<= (c + m + x)/3){
            cout << c << endl;
        }else if(c >= m and m <= (c + m + x)/3){
            cout << m << endl;
        }else {
            cout << (c + m + x) / 3 << endl;
        }
    }
}