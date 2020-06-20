// https://codeforces.com/problemset/problem/365/B

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

    int maxLen = 2;

    int currLen = 2;

    int n;
    cin>>n;
    vector<ll> arr(n);
    rep(i,n)
    {
        cin>>arr[i];
    }

    if(n<=2)
    {
        cout<<n<<endl;
        return 0;
    }

    for(int i=2;i<n;i++)
    {
        if(arr[i-2] + arr[i-1]== arr[i])
        {
            currLen++;
        }
        else {
            currLen = 2;
        }

        maxLen = max(maxLen, currLen);
    }

    cout<<maxLen<<endl;

    return 0;
}