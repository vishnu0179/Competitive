// tell if for a given set there exists a subset having sum equal to m

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);

    int n ,m;
    cin>>n>>m;
    bool dp[n+1][m+1];

    int arr[n];

    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }

    dp[0][0] = 1;

    for(int i=1;i<=m;i++)
    {
        dp[0][i] = 0;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(j<arr[i])
            {
                dp[i][j] = dp[i-1][j];
            }
            else {
                int need = j - arr[i];
                if(dp[i-1][j]==1||dp[i-1][need]==1)
                {
                    dp[i][j] = 1;
                }
                else
                {
                    dp[i][j] = 0;
                }
                
            }
        }
    }

    int ans = dp[n][m];

    if(ans)
    cout<<"YES"<<endl;
    else
    {
        cout<<"NO"<<endl;
    }
    
  

  return 0;
}