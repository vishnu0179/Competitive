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

    ll t;
    cin>>t;
    while(t--)
    {
        ll n, q;
        cin>>n>>q;

        vector<ll> arr(n);

        rep(i ,n)
        {
            cin>>arr[i];
        }

        ll ans = 0;

        ll  i = 0;

        if(n == 1)
        {
            cout<<arr[0]<<endl;
            continue;
        }
        ll res = *max_element(arr.begin(), arr.end());
        while(i < n-1)
        {
            while(i < n-1 and arr[i+1] > arr[i])
            {
                i++;
            }

            ans = ans + arr[i];
            res = max(res, ans);
            while(i<n-1 and arr[i+1] < arr[i])
            {
                i++;
            }
            
            if(i != n-1)
            {
                ans = ans - arr[i];
            }
            res = max(res, ans);
        }

        cout<<res<<endl;

    }

    return 0;
}