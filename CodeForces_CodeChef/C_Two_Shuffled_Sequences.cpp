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
    vector<int> v(n);
    for(auto &x : v)
        cin >> x;
    sort(v.begin(), v.end());
    bool flag = true;
    for (int i = 2; i < n; i++)
    {
        if(v[i] == v[i-1] and v[i-1] == v[i-2]){
            flag = false;
            break;
        }
    }

    if(!flag){
        cout << "NO\n";
        return 0;
    }else{
        cout << "YES\n";
        vector<int> br;
        vector<int> cr;
        int y = n;
        for (int i = 1; i < n;)
        {
            if(v[i-1]==v[i]){
                br.push_back(v[i - 1]);
                cr.push_back(v[i]);
                i += 2;
                y -= 2;
            }else{
                cr.push_back(v[i-1]);
                i++;
                y--;
            }
        }
        // if(y!=0){
        //     cr.push_back(v[n - 1]);
        // }

        cout << br.size() << endl;
        for(auto &x : br){
            cout << x << " ";
        }
        cout << endl;

        cout << cr.size() << endl;

        for (auto it = cr.rbegin(); it != cr.rend();it++){
            cout << *it << " ";
        }
            cout << endl;
    }
}