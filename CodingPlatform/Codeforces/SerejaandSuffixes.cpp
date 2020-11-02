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

int main() {
    fio;
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    int n,m;
    cin>>n>>m;

    vi arr(n+1);

    for(int i=1;i<arr.size();i++)
    {
      cin>>arr[i];
    }

    vi dp(n+2,0);

    unordered_set<int> st;

    for(int i = n;i>0;i--)
    {
        if(st.find(arr[i])==st.end())
        {
            dp[i] = dp[i+1] + 1;
            st.insert(arr[i]);
        }
        else {
            dp[i] = dp[i+1];
        }
        
    }

    while(m--)
    {
        int temp;
        cin>>temp;

        cout<<dp[temp]<<endl;
    }

    return 0;
}