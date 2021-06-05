#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf 1e9
#define INF 1e18
#define mod 10000007
#define MOD 1000000000

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int min_A = min(a,b);
        int min_B = min(c,d);
        int max_A = max(a,b);
        int max_B = max(c,d);


        if(max_A > max_B and max_B > min_A){
            cout<<"YES";
         
        }
        else if(max_A < max_B and min_B <max_A){
            cout<<"YES";
          
        }
        else{
            cout<<"NO";
        }

        cout<<"\n";
    }
}