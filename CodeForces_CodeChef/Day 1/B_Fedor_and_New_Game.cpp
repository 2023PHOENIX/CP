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
    
    int n,m,k;  cin>>n>>m>>k;

    int a[m+1];

    for(int i=0;i<=m;i++)cin>>a[i];

    int frd = 0;

    for(int i=0;i<m;i++){
        int cnt = 0 ;
        for(int j=0;j<n;j++)
            if( (a[i] & (1<<j)) != (a[m] & (1<<j)))
                cnt++;
        if(cnt <= k)
            frd++;
    }
    cout<<frd<<endl;
}