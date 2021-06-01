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


ll nC2(ll n){
    if(n<2){
        return 0;
    }
    return (n*(n-1))/2;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int m,n;    cin>>n>>m;


    ll max = nC2(n+1-m);
    ll min ;

    ll leftOver = (n%m) * (nC2(n/m +1));
    ll paired  = (m - n%m) * nC2(n/m);
    cout<< leftOver + paired<<" "<<max<<endl;
    



}