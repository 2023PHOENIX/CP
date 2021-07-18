#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

double dp[3001][3001][3001];

double sushi(int x, int y, int z, int &n)
{
    if (x < 0 || y < 0 || z < 0)
    {
        return dp[x][y][z] = 0;
        
    }
    if(x==0 && y==0 && z==0){
        return dp[x][y][z] = 0;
    }
    if (dp[x][y][z] > -0.9)
    {
        return dp[x][y][z];
    }
    double exp = (n + sushi(x - 1, y, z, n) * x + sushi(x + 1, y - 1, z, n) * y + sushi(x, y + 1, z - 1, n) * z);
   
    return dp[x][y][z] = exp/ (x + y + z);
}

int main()
{

    int n;
    cin >> n;
    int x{0}, y{0}, z{0};
    for (int i = 1; i <= n; i++)
    {
        int d;
        cin >> d;

        if (d == 1)
        {
            x++;
        }
        else if (d == 2)
        {
            y++;
        }
        else
        {
            z++;
        }
    }

    memset(dp, -1, sizeof dp);

    cout <<fixed<<setprecision(10)<<sushi(x, y, z, n) << "\n";
}