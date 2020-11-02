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
        int n, x;
        cin>>n>>x;

        vi arr(n);

        rep(i,n)
        {
            cin>>arr[i];
        }

        sort(arr.begin(), arr.end());



        int temp = n;
        int ans= 0;

        int i = 0;
        int teamSize = 1;
        

        for(i=n-1;i>=0;i--)
        {
            if(arr[i] * teamSize >= x)
            {
                ans++;
                teamSize = 1;
            }
            else {
                teamSize++;
            }
        }


        cout<<ans<<endl;

    }

    return 0;
}