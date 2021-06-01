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

    string a,b; cin>>a>>b;

    for(int i=0;i<a.length();i++){
        if(a[i]=='0' and b[i]=='0'){
            cout<<'0';
        
        }
        else if(a[i]=='1' and b[i]=='1'){
            cout<<'0';
        }
        else{
            cout<<'1';
        }
    }
}