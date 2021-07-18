#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf 1e9
#define INF 1e18
#define mod 10000007
#define MOD 1000000000
const int m = 1000000007;

vector<ll> niceIndex(vector<ll> &v)
{
    vector<ll> result;
    map<ll, int> freq;
    ll sum = 0;
    for (auto &x : v)
    {
        freq[x]++;
        //  find the sum
        sum += x;
    }

    for (int i = 0; i < v.size(); i++)
    {

        ll remain = sum - v[i];

        // if remain is odd i can't find the number == sum[rest of array]
        if (remain % 2 == 0)
        {

            remain >>= 1;
            // remove ith index element
            if (freq.find(remain) != freq.end())
            {
                if ((v[i] == remain && freq[remain] > 1) || v[i] != remain)
                {
                    result.push_back(i+1);
                }
            }
        }
    }

    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<ll> v(n);
    for(auto &x : v){
        cin >> x;
    }
    auto rs = niceIndex(v);

    cout << rs.size() << endl;
    for(auto &x : rs){
        cout << x << " ";
    }
}