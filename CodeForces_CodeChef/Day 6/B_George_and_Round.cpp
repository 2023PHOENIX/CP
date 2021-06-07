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

    int n,m;    cin>>n>>m;

    vector<int> a(n),b(m);

    for(int &x : a)cin>>x;
    for(int &x : b)cin>>x;


    int j=0,i=0,cnt=0;

    while(i<n and j<m){


        if(b[j] >= a[i]){
            i++;
            j++;
            
        }
        else{
            j++;
        }
    }

    cout<<n-i<<endl;
}