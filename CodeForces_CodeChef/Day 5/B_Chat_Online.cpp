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

    int p, q, l, r;
    cin >> p >> q >> l >> r;

    vector<pair<int, int>> X, Z;
    int a, b;
    for (int i = 0; i < p; i++)
    {
        cin >> a >> b;
        X.push_back(make_pair(a, b));
    }
    for (int i = 0; i < q; i++)
    {
        cin >> a >> b;
        Z.push_back(make_pair(a, b));
    }

    int result = 0;
    for(int k=l;k<=r;k++){
        bool flag = false;
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                if(X[i].first >= Z[j].first+k and X[i].first <= Z[j].second + k){
                    flag = true;
                }
                if(Z[j].first + k >= X[i].first and Z[j].first + k <= X[i].second){
                    flag = true;
                }
            }
        }
        if(flag){
            result++;
        }
    }


    cout<<result<<endl;
}