#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  cin>>n;

    map<int,int> hm_dress;

    int arr[n+1][2];

    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1];
        // surely they will play n-1 games in home dress
        hm_dress[arr[i][0]]++;
    }

    int total_match = 2*(n-1);
// check how many team have home dress == my away dress code

    for(int i=0;i<n;i++){
        int hm = hm_dress[arr[i][1]] + n-1;
        int awy = total_match - hm;
        cout<<hm<<" "<<awy<<"\n";
    }


}