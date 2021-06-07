#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf 1e9
#define INF 1e18
#define mod 10000007
#define MOD 1000000000

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin>>t;
    int a,b,X,Y;
    while(t--){
        cin>>a>>b>>X>>Y;

        cout<<X/a + Y/b<<endl;
    }
}