#include<bits/stdc++.h>

using namespace std;


int main(){

    int n;  cin>>n;

    int a[1001];

    for(int i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n,greater<int>());

    int rr{0};

    for(int i=0;i<n;i++){
        rr += a[i]*a[i]*(1 - (i%2)*2);

    }
    double pi = asin(1) * 2;

    // cout<<pi<<endl;

    cout<<fixed<<setprecision(10)<<(pi*rr)<<endl;
}