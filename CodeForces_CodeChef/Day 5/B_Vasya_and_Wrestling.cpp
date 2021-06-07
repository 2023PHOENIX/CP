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

    vector<ll> p1,p2;

    ll d;  
    ll sum_p1{0},sum_p2{0};

    
    while(n--){
        cin>>d;
        
        (d>0)?p1.push_back(d):p2.push_back(d);
        (d>0)?sum_p1+=d : sum_p2+=d;
    }


    if(abs(sum_p1)>abs(sum_p2)){
        cout<<"first";
        return 0;
    }
    else if(abs(sum_p2) > abs(sum_p1)){
        cout<<"second";
        return 0;
    }    
    else{
        // cout<<sum_p1<<" "<<sum_p2;
      
       
          
            for(int i=0;i<min(p1.size(),p2.size());i++){
                if(p1[i] > abs(p2[i])){
                    cout<<"first";
                    return 0;
                }
                if(p1[i] <abs(p2[i])){
                    cout<<"second";
                    return 0;
                }
            }

        // cout<<d;
        if(d > 0){
            cout<<"first";
        }else{
            cout<<"second";
        }


        }
}