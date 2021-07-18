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

    ll t;
    cin >> t;
    ll arr[100001];
    while(t--){

        memset(arr, 0, sizeof arr);
        int n;
        cin >> n;

        string name;
        
       ll rank;
       
        for (int i = 0; i < n; i++)
        {
            cin >> name >> rank;
            arr[rank]++;
        }

       ll acutal_rank = 1;
        ll sum = 0;
        for (int i = 1; i <= n; i++)
        {
            while(arr[i]){
            sum += abs(acutal_rank - i);
            arr[i]--;
            acutal_rank++;
            } 
        }

        cout << sum << endl;
    }
}