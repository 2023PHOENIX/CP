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

    ll n;  cin>>n;
    vector<ll> v(n);
    for(ll &x : v)cin>>x;

    vector<ll> copy(v);

    sort(copy.begin(),copy.end());
    
    // if already sorted 

    ll cnt = 0;
    
    for(ll i=0;i<copy.size();i++){
        if(v[i]==copy[i])
            cnt++;
    }   
    

    if(cnt==v.size()){
        cout<<"yes\n1 1";
    return 0;
    }
    // if it is not sorted 
    // check for segment which satisy the condition a[i] < a[i-1];
    bool isFirst = false;
    ll start,end;

    for(ll i=0;i<v.size()-1 and isFirst != true;){
        if(v[i] < v[i+1]){
            i++;
        }
        else{
            start = i;
            end = i;

            while(v[i] > v[i+1] and i<v.size()-1){
                i++;
                end++;
            }
            sort(v.begin()+start,v.begin()+end+1);
            isFirst = true;
        }
    }


    for(int i=0;i<v.size();i++){
        if(copy[i]!=v[i]){
            cout<<"no";
            return 0;
        }
    }

    cout<<"yes\n"<<start+1<<" "<<end+1<<endl;


}