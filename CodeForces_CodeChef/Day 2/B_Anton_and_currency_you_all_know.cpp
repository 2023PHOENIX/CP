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
    string s;   cin>>s;

    // sort(s.begin(),s.end(),greater<int>());
    int smallest_even = INT_MAX;
    int idx = -1;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]%2==0 ){
            idx = i;
            if(s[s.length()-1] > s[i])
                break;
        }
    }
    swap(s[s.length()-1],s[idx]);
    (idx!=-1)?cout<<s<<endl:cout<<-1<<endl;
    
}