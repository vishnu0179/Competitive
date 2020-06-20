// https://codeforces.com/problemset/problem/433/B

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

    int n;
    cin>>n;

    vi arr(n);

    rep(i,n)
    {
        cin>>arr[i];
    }

    vector<ll> unsorted_presum(n);

    unsorted_presum[0] = arr[0];
    for(int i=1;i<n;i++)
    {
        unsorted_presum[i] = unsorted_presum[i-1] + arr[i];
    }

    sort(arr.begin(), arr.end());
    vector<ll> sorted_presum(n);
    sorted_presum[0] = arr[0];

    for(int i=1;i<n;i++)
    {
        sorted_presum[i] = sorted_presum[i-1] + arr[i];
    }


    int m;
    cin>>m;
    int type, l, r;

    unsorted_presum.insert(unsorted_presum.begin(), 0);
    sorted_presum.insert(sorted_presum.begin(), 0);

    while(m--)
    {
        cin>>type>>l>>r;


        if(type == 1)
        {
            ll temp  = unsorted_presum[r] - unsorted_presum[l-1];
            cout<<temp<<endl;
        }
        else {
            ll temp  = sorted_presum[r] - sorted_presum[l-1];
            cout<<temp<<endl;
        }
    }

    return 0;
}