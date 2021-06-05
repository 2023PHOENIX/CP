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

    string s;   cin>>s;
    int hash[26] = {0};

    for(int i=0;i<s.length();i++){
        hash[s[i]-'a']++;
    }

    int oddCount = 0;
    for(int i=0;i<26;i++){
        if(hash[i]&1)
            oddCount++;
    }

    ((oddCount==0) or (oddCount&1))?cout<<"First":cout<<"Second";
    return 0;

}