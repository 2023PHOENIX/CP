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

    int n;  cin>>n;

    if(n%7==0){
        for(int i=0;i<(n/7);i++){
            cout<<7;
            
        }
        return 0;
    }
    
    string ans = "";
    while(n!=0){

        n -= 4;
        ans += "4";

        if(n%7==0){
            for(int i=0;i<(n/7);i++){
                ans+= "7";
            }
            break;
        }
        if(n<0){
            ans = "-1";
            break;
        }
    }

    cout<<ans<<endl;
}