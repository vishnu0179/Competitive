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

    ll x ,y;
    cin>>x>>y;

    ll n;
    cin>>n;

    vector<ll> f(7);

    f[1] = (x+mod)%mod;
    f[2] = (y+mod)%mod;
    f[3] = (f[2] - f[1] +mod)%mod;
    f[4] = (-f[1] + mod)%mod;
    f[5] = (-f[2] + mod)%mod;
    f[6] = (-f[3]+mod)%mod;

    if(n<=6)
    {
        cout<<f[n];
        return 0;
    }




    cout<<f[(n%6==0)?6:n%6]%mod;



    


    return 0;
}