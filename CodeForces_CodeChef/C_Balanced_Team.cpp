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
   vector<ll> v(n);
   for(auto &x : v)
       cin >> x;

   sort(v.begin(), v.end());
   ll it = 0;
   ll result = 0;
   for (ll i = 0; i < n; i++)
   {
       while(v[it] - v[i] <= 5 and it < n){
           it++;
       }

       result = max(result, it-i);
   }

   cout << result << endl;
}