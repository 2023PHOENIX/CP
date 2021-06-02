#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf 1e9
#define INF 1e18
#define mod 10000007
#define MOD 1000000000
#define LIMIT 10000000

bool prime[LIMIT];
//  here we check prime or not prime denote false
void func_prime(){
    prime[0] = prime[1] = 1;
    for(int i=2;i<sqrt(LIMIT);i++){
        if(!prime[i]){
            for(int j=i*i;j<LIMIT;j+=i){
                prime[j] = 1;
            }
        }
    }
}

bool isSqrt(ll n){
    double sq = sqrt(n);

    if(sq == (int)sq)
        return true;
    return false;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int t;  cin>>t;
    func_prime();
    while(t--){
        ll n;   cin>>n;
        if(n==4){
            cout<<"YES";
        }
        else if(n%2==0){
            cout<<"NO";
        }else if(isSqrt(n)==1 and prime[(int)sqrt(n)]==0){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<endl;
    }
}