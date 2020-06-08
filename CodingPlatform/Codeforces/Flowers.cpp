// https://codeforces.com/problemset/problem/474/D

#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

typedef long long ll;

int pre[100001];
int dp[100001];

int k;

int getAns(int n)
{
    if(n==0)
    return 1;

    if(dp[n] != -1)
        return dp[n];

    // For white
    int ans = 0;
    if(n >= k)
    ans += getAns(n-k);

    ans = ans%mod;

    // For red
    ans += getAns(n-1);

    ans = ans%mod;

    return dp[n] = ans;
}

void init()
{
    for(int i=0;i<=100000;i++)
    {
        dp[i] = -1;
    }  

    pre[0] = 0;
    for(int i=1;i<=100000;i++)
    {
        pre[i] = (pre[i-1]%mod + getAns(i)%mod)%mod;
    }  
}

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t, a, b;
    cin>>t;
    cin>>k;

    init();
    while(t--)
    {
        cin>>a>>b;
        int sum  = (pre[b] - pre[a-1] + mod)%mod;
        cout<<sum<<endl;
    }

    return 0;
}