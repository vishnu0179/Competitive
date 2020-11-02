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

ll getmsb(ll n) 
{ 
    if (n == 0) 
        return 0; 
  
    ll msb = 0; 
    n = n / 2; 
    while (n != 0) { 
        n = n / 2; 
        msb++; 
    } 
  
    return msb;
}

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
        ll n;
        cin>>n;

        vi arr(n);
        rep(i,n)    cin>>arr[i];

        vi vis(33, 0);

        ll pos = 31;

        for(ll i=0;i<n;i++)
        {
            ll msb = getmsb(arr[i]);
            vis[msb]++;
            //cout<<msb<<" ";
        }

        ll ans = 0;
        for(ll i=0;i<32;i++)
        {
            ll temp = vis[i];

            ans =  ans + (temp*(temp-1))/2;
        }
        cout<<ans<<endl;

    }

    return 0;
}