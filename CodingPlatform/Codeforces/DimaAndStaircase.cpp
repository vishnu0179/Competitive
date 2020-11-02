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


    vector<ll> arr(n+1);

    for(int i=1;i<arr.size();i++)
    {
      cin>>arr[i];
    }

    int m;
    cin>>m;
    ll prev = 0;
    while(m--)
    {
        int w,h;
        cin>>w>>h;

        

        cout<<max(prev, arr[w])<<endl;

        prev = max(prev + h, arr[w] + h);

    }

    return 0;
}