    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    #define inf 1e9
    #define INF 1e18
    #define mod 10000007
    #define MOD 1000000000
    #define limit 3001

    ll dp[limit][limit];


    // string LCS(string a,string b,ll n,ll m){
    //     if(n==0||m==0){
    //         return "";
    //     }

    //     if(dp[n][m]!=""){
    //         return dp[n][m];
    //     }

    //     if(a[n-1]==b[m-1]){
    //         return dp[n][m] = a[n-1] + LCS(a,b,n-1,m-1);
    //     }

    //     return dp[n][m] = ((LCS(a,b,n,m-1).length()>LCS(a,b,n-1,m).length())?LCS(a,b,n,m-1):LCS(a,b,n-1,m));

    // }

    string bottomUp(string a,string b){
        
        ll n = a.length();
        ll m = b.length();

        string s = "";
        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=m;j++){
                if(a[i-1]==b[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                   
                }
                else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        // cout<<dp[n][m]<<endl;
        ll i = n,j = m;

        while(i>0 and j>0){
            if(a[i-1]==b[j-1]){
                s.push_back(a[i-1]);
                i--;
                j--;
            }
            else{
                if(dp[i][j-1] > dp[i-1][j]){
                    // s.push_back(b[j-1]);
                    j--;
                }else{
                    // s.push_back(a[i-1]);
                    i--;
                }
            }
        }

        return s;
    }
    int main()
    {
        ios_base:: sync_with_stdio(false);
        cin.tie(NULL);
        string a,b; cin>>a>>b;

        // string r = LCS(a,b,a.length(),b.length());
        // reverse(r.begin(),r.end());
        // cout<<r<<endl;

        string r = bottomUp(a,b);
        reverse(r.begin(),r.end());
        cout<<r<<endl;

    }   