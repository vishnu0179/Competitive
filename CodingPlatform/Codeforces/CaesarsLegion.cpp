#include <bits/stdc++.h>
#define mod 100000000
using namespace std;

typedef long long ll;

int limit_f, limit_h;
ll dp[101][101][11][11];

int solve(int f, int h, int k1, int k2)
{
    if((f+h)==0)    return 1;

    if(dp[f][h][k1][k2]!=-1)
        return dp[f][h][k1][k2];

    int x= 0;
    if(f>0 && k1>0)
        x = solve(f-1,h, k1 -1, limit_h);

    int y= 0;
    if(h>0&&k2>0)
        y = solve(f,h-1, limit_f, k2 -1);

    dp[f][h][k1][k2] = (x+y)%mod;

    return dp[f][h][k1][k2];
}


int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n1, n2;
    cin >> n1 >> n2 >> limit_f >> limit_h;

    for (int i = 0; i <= n1; i++)
    {
        for (int j = 0; j <= n2; j++)
        {
            for (int k = 0; k <= limit_f; k++)
            {
                for (int l = 0; l <= limit_h; l++)
                    dp[i][j][k][l] = -1;
            }
        }
    }

    cout<<solve(n1, n2, limit_f, limit_h);

    return 0;
}