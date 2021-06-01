#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>


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
    ll k;  cin>>k;

    ll current = 1;
    ll d;  
    ll cnt = 0;
    for(int i=0;i<k;i++){
        cin>>d;

        if(current > d){
            cnt += abs(n-current) + (d);
        }
        else{
            cnt += abs(d-current);
        }

        // cout<<cnt<<endl;
        current = d;

    }

    cout<<cnt<<endl;
}