#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf 1e9
#define INF 1e18
#define mod 10000007
#define MOD 1000000000
const int m = 1000000007;
const int limit = 3001;


int buildSieve(int n){

    vector<int> v(n + 1, 0);

    for (int i = 2; i <= n; i++){
        if(!v[i]){
            for (int j = i+i; j <= n; j+= i){
                v[j]++;
            }
        }
    }

    int cnt = 0;

    for (int i = 2; i <= n; i++){
        if(v[i]==2){
            cnt++;
        }
    }

    return cnt;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    cout << buildSieve(n) << endl;
}