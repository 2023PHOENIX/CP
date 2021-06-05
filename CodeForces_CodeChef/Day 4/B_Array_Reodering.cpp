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

    while(t--){
        int n;  cin>>n;
        vector<int> a(n);
    vector<int> v;
        for(int &x : a){
            cin>>x;
            if(x%2==0){
                v.push_back(x);
            }
        }
        for(int &x : a){
            if(x%2!=0){
                v.push_back(x);
            }
        }


   
    int cnt = 0;
        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
                if(__gcd(v[i],2*v[j]) > 1){
                    cnt++;
                }
            }
        }

        cout<<cnt<<endl;
    }
}