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


    int n, m;
    cin>>n>>m;

    vi a(n);
    vi b(m);

    vi mini(n);

    rep(i,n)    cin>>a[i];
    rep(i,m)    cin>>b[i];

    for(int i=0;i<n;i++)
    {
        int ele = a[i];
        int minAnd = INT_MAX;
        for(int j=0;j<m;j++)
        {
            minAnd = min(minAnd, a[i]&b[j]);
        }
        mini[i] = minAnd;
    }

    rep(i,n){
        cout<<mini[i]<<" ";
    }

    int ans = 0;

    for(int j=0;j<n;j++)
    {
        ans = ans | mini[j];
    }

    cout<<ans<<endl;

    return 0;
}