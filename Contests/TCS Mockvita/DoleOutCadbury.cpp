#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define rep(i,n) for(auto i=0;i<n;i++)
#define all(x) x.begin(),x.end()
#define fio ios_base::sync_with_stdio(false); cin.tie(0)

#define mod 1000000007

using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ll;
typedef vector<vi> vvi;

#define N 2000

int solve(vvi &dp, int p, int q)
{
    if(p==q)
    {
        return 1;
    }

    if(dp[p][q]!=-1)
    {
        return dp[p][q];
    }

    if(p<q)
    {
        dp[p][q] = solve(dp, p, q-p) + 1;
        return dp[p][q];
    }

    dp[p][q] =  solve(dp,p-q, q ) + 1;

    return dp[p][q];

}

int main() {
    

    int p, q, r, s;
    cin>>p>>q>>r>>s;

    vvi dp(q+1, vi(s+1,-1));

    int ans = 0;

    for(int i=p;i<=q;i++)
    {
        for(int j=r;j<=s;j++)
        {
            ans += solve(dp, i, j);
        }
    }

    cout<<ans;

    return 0;
}