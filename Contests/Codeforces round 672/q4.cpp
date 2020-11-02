#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define rep(i,n) for(auto i=0;i<n;i++)
#define all(x) x.begin(),x.end()
#define fio ios_base::sync_with_stdio(false); cin.tie(0)

#define mod 998244353

using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ll;
typedef vector<vi> vvi;

ll power(ll x, int y, int p) 
{ 
    ll res = 1;
  
    x = x % p; 
  
    while (y > 0) { 

        if (y & 1) 
            res = (res * x) % p; 
  
        y = y >> 1;
        x = (x * x) % p; 
    } 
    return res; 
} 

ll modInverse(ll n, int p) 
{ 
    return power(n, p - 2, p); 
} 
  

ll cal(ll n, int r, int p) 
{ 
    if (r == 0) 
        return 1; 
  

    ll fac[n + 1]; 
    fac[0] = 1; 
    for (int i = 1; i <= n; i++) 
        fac[i] = (fac[i - 1] * i) % p; 
  
    return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p; 
} 

struct lamp{
    ll on, off;
};

int main() {
    fio;
    #ifndef ONLINE_JUDGE
      freopen("../input.txt", "r", stdin);
      freopen("../output.txt", "w", stdout);
    #endif

    int n, k;
    cin>>n>>k;

    map<ll, int> st;

    vector<lamp> l(n);
    vector<pair<ll, ll>> arr;
    for(int i=0;i<n;i++)
    {
        ll u, v;
        cin>>u>>v;

        arr.pb({u, 0});
        arr.pb({v, 1});
    }

    sort(arr.begin(), arr.end(), [](pair<ll, ll> p1, pair<ll,ll> p2) {

        if(p1.first == p2.first)
        {
            return p1.second > p2.second;
        }
        return p1.first < p2.first;
    });

    ll ans = 0;

    ll cnt = 1;
    ll prev = arr[0].first;

    for(int i=1;i<arr.size();i++)
    {
        ll state = arr[i].second;
        ll curr = arr[i].first;

        if(state == 0)
        {
            cnt++;
        }
        else {
            cnt--;
        }

        ll temp = curr - prev + 1;

        if(cnt >= k)
        {
            ll temp2 = cnt + temp;
            ans = (ans%mod +temp )%mod; 
        }
        
    }

    cout<<ans<<endl;


    return 0;
}