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

    int t;
    cin >> t;

    while(t--){

        int w, h, n;
        cin >> w >> h >> n;

        vector<int> x_cor(n);
        vector<int> y_cor(n);


        for (int i = 0; i < n; i++)
        {
            cin>>x_cor[i]>>y_cor[i];
        }

        sort(x_cor.begin(), x_cor.end());
        sort(y_cor.begin(), y_cor.end());

        int dlt_x = x_cor[0] - 0;
        int dlt_y = y_cor[0] - 0;

        for (int i = 1; i < n;i++){
            dlt_x = max(x_cor[i] - x_cor[i - 1] -1, dlt_x);
            dlt_y = max(y_cor[i] - y_cor[i - 1] -1 , dlt_y);

        }
        // last case
        dlt_x = max(dlt_x, w - x_cor[n - 1] -1);
        dlt_y = max(dlt_y, h - y_cor[n-1] -1);

        cout << dlt_x * dlt_y << endl;
    }
}