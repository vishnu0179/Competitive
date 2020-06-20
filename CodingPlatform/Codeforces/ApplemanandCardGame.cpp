// https://codeforces.com/problemset/problem/462/B

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

    ll n, k;
    cin>>n>>k;

    string s;
    cin>>s;

    vector<ll> hash(26, 0);

    for(char a: s)
    {
        hash[a-'A']++;
    }

    sort(all(hash), greater<int>());

    ll ans = 0;
    int i = 0;
    while(k>0)
    {
        if(k>=hash[i])
        {
            ans+=hash[i]*hash[i];
            k-=hash[i];
        }
        else {
            ans+=k*k;
            k =0;
        }   
        i++;
    }

    cout<<ans;

    return 0;
}