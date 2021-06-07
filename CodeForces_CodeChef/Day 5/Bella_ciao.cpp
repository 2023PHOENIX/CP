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

        int D,d,P,Q;


        int t;  cin>>t;

        while(t--){
            cin>>D>>d>>P>>Q;
            
            int i= 0;
            int sum = 0;
            int l = d;
            while(l<=D){
                sum += (P + i*Q)*d;
                i++;
                
                
                if(l+d > D){
                    sum += (P + i*Q)*(D-l);
                    break;
                }    
                
                l+=d;
                
            }

          

            cout<<sum<<"\n";
        }
    }   