#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define inf 1e9
#define INF 1e18
#define mod 10000007
#define MOD 1000000000
const int m = 1000000007;

struct Activity{
    int start;
    int end;
};

bool comp(Activity a,Activity b){
  
    return a.end <  b.end;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;
        
        vector<Activity> v(n);

        for (auto &x : v){
            int a, b;
            cin >> a >> b;
            x.start = a;
            x.end = b;
        }

        sort(v.begin(), v.end(), comp);


        // for(auto &x :v){
        //     cout << x.start << " " << x.end<<endl;
        // }
        int cnt = 1;

        int previous_finish = v[0].end;
        for (int i = 1; i < n; i++)
        {
            if(v[i].start >= previous_finish){
                cnt++;
                // cout << v[i].start << endl;
                previous_finish = v[i].end;
            }
        }

        cout << cnt << endl;
    }
}