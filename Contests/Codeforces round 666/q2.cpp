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
typedef vector<ll> vl;

int main() {
    fio;
    #ifndef ONLINE_JUDGE
      freopen("../input.txt", "r", stdin);
      freopen("../output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    vl arr(n);

    rep(i,n)    cin>>arr[i];

    sort(arr.begin(), arr.end());

    int val = arr[n-1];

    ll c = (int)round((pow(val, 1.0/float(n-1))));

    ll ans = 0;

    for(int i=0;i<n;i++)
    {
        ans = ans + abs(int(pow(c, i)) - arr[i]);
    }

    cout<<ans<<endl;

    

    return 0;
}