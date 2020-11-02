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

    int t;
    cin>>t;

    while(t--)
    {
        int n,m,b;

        cin>>n>>b>>m;

        vi arr(m);

        for(int i=0;i<arr.size();i++)
        {
          cin>>arr[i];
        }

        int prev = -1;
        int ans = 0;

        rep(i,m)
        {
            int temp = arr[i]/b;

            if(temp != prev)
            {
                ans++;
                prev = temp;
            }

        }

        cout<<ans<<endl;
    }

    return 0;
}