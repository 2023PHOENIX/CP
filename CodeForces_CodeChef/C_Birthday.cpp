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

    for (int i = 0; i < n; i+=2){
        cout << v[i] << " ";
    }

    //  if n is odd i will subtract -2 
    if(n%2){
        n -= 2;
    }
    // if even index = [n-1]
    else{
        n -= 1;
    }

    for (int i = n; i > 0;i-= 2){
        cout << v[i] << " ";
    }
}