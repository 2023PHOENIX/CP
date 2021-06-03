#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf 1e9
#define INF 1e18
#define mod 10000007
#define MOD 1000000000

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    cin >> a >> b;

    int hash_a[26] = {0};
    int hash_b[26] = {0};
    for (auto &x : a)
    {
        hash_a[x - 'a']++;  
    }
    for(auto &x : b){
        hash_b[x-'a']++;
    }
    
    bool isAutomation = false;

    for(int i=0;i<26;i++){
        // cout<<hash_a[i]<<" "<<hash_b[i]<<endl;
        if(hash_a[i] < hash_b[i]){
            cout<<"need tree\n";
            return 0;
        }
        if(hash_a[i] > hash_b[i]){
            isAutomation = true;
         
        }
    }

    bool isArray = false;

    int cnt = 0;
    
    for(int i=0;i<a.length();i++)
    {
        if(a[i]==b[cnt]){
            cnt++;
        }
        if(cnt==b.length()){
            break;
        }
    }

    if(cnt!=b.length()){
        isArray = true;
    }

    if(isArray and isAutomation){
        cout<<"both";
    }else if(!isArray && isAutomation){
        cout<<"automaton";
    }else if(!isAutomation  && isArray){
        cout<<"array";
    }

    return 0;

}