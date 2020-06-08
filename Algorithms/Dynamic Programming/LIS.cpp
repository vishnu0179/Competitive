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

int lis(vi arr, int n)
{
  int dp[n];

  dp[0] = 1;

  for(int i=1; i<n ;i++)
  {
    dp[i] = 1;
    for(int j = 0; j< i;j++)
    {
      if(arr[i]> arr[j])
      {
        dp[i] = max(dp[i], dp[j] + 1);
      }
    }
  }

  return *max_element( dp , dp + n);
}

int main() {
    fio;
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    vi arr(n);

    for(int i=0;i<arr.size();i++)
    {
      cin>>arr[i];
    }

    cout<<lis(arr, n);



    return 0;
}