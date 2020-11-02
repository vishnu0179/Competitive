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



int solve(bool p, vi &arr, int i, int n, vvi &dp)
{
    if(i>=n)
    {
        return 0;
    }
    if(dp[i][p]!=-1)
    {
        return dp[i][p];
    }
    int temp = 0;
    if(p)
    {
        if(i==n-1)
        temp  = arr[i] + solve(!p, arr, i+1, n, dp);
        else {
            temp = min(arr[i] + solve(!p, arr, i+1, n, dp), arr[i] + arr[i+1] + solve(!p, arr, i+2, n, dp));
        }
    }
    else {
        temp = min(solve(!p, arr, i+1, n, dp), solve(!p, arr, i+2,n, dp));
    }

    dp[i][p] = temp;
    return dp[i][p];

}

int main() {
    fio;
    #ifndef ONLINE_JUDGE
      freopen("../input.txt", "r", stdin);
      freopen("../output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vi arr(n);
        vvi dp(n+1, vi(2, -1));
        rep(i, n)   cin>>arr[i];

        int ans = solve(1, arr, 0, n, dp);

        cout<<ans<<endl;
    }

    return 0;
}