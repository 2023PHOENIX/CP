#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
void solve(ll n)
{

    int i = 2;
    vector<int> v;
    while (i <= sqrt(n))
    {

        if (n % i == 0)
        {
            v.push_back(i);
            n = n / i;
        }

        if (v.size() == 2)
        {
            v.push_back(n);
            break;
        }

        i++;
    }

    if (v.size() < 3)
    {
        cout << "NO\n";
        return;
    }
    else if (v[0] == v[2] || v[1] == v[2])
    {
        cout << "NO\n";
        return;
    }
    else
    {
        cout << "YES\n";
        for (auto &x : v)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        solve(n);
    }
}