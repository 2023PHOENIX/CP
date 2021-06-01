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

    int n,t;  cin>>n>>t;

    string s;   cin>>s;

    while(t--){
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='B' and s[i+1]=='G'){
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }

    cout<<s<<endl;
    
}