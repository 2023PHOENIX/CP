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
    vector<int> v(n);

    for(int &x : v)cin>>x;
    int cnt = 0,idx = -1;
    for(int i=1;i<v.size();i++){

        if(v[i-1] > v[i] and idx==-1){
        cnt++;
        idx = i;
        }
        
    }

    if(cnt==0){
        cout<<0;
        return 0;
    }
    vector<int> temp(n);

    for(int i=idx;i<n;i++){
        temp[i-idx] = v[i];
    }
    for(int i=idx-1;i>=0 ;i--){
        temp[i + n - idx] = v[i];
    }
    bool isTrue = false;
    for(int i=1;i<n;i++){
        if(temp[i-1] > temp[i]){
            isTrue = true;
            break;
        }
    }

    (isTrue)?cout<<-1:cout<<v.size() - idx<<endl;
}