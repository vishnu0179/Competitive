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

        rep(i,n)    cin>>arr[i];

        sort(arr.begin(), arr.end(), greater<int> ());

        vi ans;
        ans.clear();

        ans.push_back(arr[0]);
        
        int currGcd = arr[0];

        vi vis(n, 0);
        while(ans.size() != n)
        {
            int maxGcd = 0;
            int idx = 1;
            for(int i=1;i<n;i++)
            {
                if(vis[i] == 0)
                {
                    int temp = __gcd(currGcd, arr[i]);
                    if(temp > maxGcd)
                    {
                        maxGcd = temp;
                        idx = i;
                    }
                }
            }

            currGcd = maxGcd;
            vis[idx] = 1;
            ans.push_back(arr[idx]);
        }
        

        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;


    }

    return 0;
}