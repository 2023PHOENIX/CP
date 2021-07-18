#include <bits/stdc++.h>
using namespace std;
// bool funct(int k)
// {
//     if (k == 0)
//     {
//         return 1;
//     }

//     bool result = 0;

//     for (int i = 0; i < v.size(); i++)
//     {
//         if (v[i] > k)
//         {
//             continue;
//         }
//         if(funct(k - v[i])==1){
                // result = 1;
// }
//     }

//     return result;
// }

string func(vector<int> &arr, int n, int k)
{

    bool dp[k + 1];
    memset(dp, 0, sizeof dp);
    for (int i = 1; i <= k; i++)
    {
        for (auto x : arr)
        {
            if (x > i)
            {
                continue;
            }
            if (dp[i - x] == 0)
            {
                dp[i] = 1;
            }
        }
    }
    return (dp[k]==1) ? "First" : "Second";
}
int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << func(arr, n, k) << endl;
}