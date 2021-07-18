#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf 1e9
#define INF 1e18
#define mod 10000007
#define MOD 1000000000
const int m = 1000000007;
int temp[600010];
int num[600006];
int a[200005];

struct node{
    int id;
    int b;
    int c;
}t[200005];
int k;
int find(int x)
{
    int l = 0;
    int r = k;

    while(l<r){
        int m = (l + r) >> 1;
        if(x < temp[m]){
            r = m;
        }else{
            l = m + 1;
        }
    }
        if(temp[l] == x){
            return l;
        }

        return l + 1;
  
}

bool cmp(node a,node b){
    
    if(a.b!=b.b){
        return a.b > b.b;
    }

    return a.c > b.c;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int tot = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        temp[tot++] = a[i];
    }
    int m;
    cin >> m;

    for (int i = 0; i < m;i++){
        cin >> t[i].b;
        temp[tot++] = t[i].b;
    }
    for (int i = 0; i < m; i++){
        cin >> t[i].c;
        temp[tot++] = t[i].c;
    }

    sort(temp, temp + tot);
    k = unique(temp, temp + tot) - temp;

    for (int i = 0; i < n;i++){
        num[find(a[i])]++;
    }

    for (int i = 0; i < m;i++){
        t[i].b = num[find(t[i].b)];
        t[i].c = num[find(t[i].c)];
        t[i].id = i;
    }

    sort(t, t + m, cmp);

    cout << t[0].id + 1 << endl;
}