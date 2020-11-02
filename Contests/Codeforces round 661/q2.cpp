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
typedef vector<ll> vl;
typedef vector<vi> vvi;

int main() {
    fio;
    #ifndef ONLINE_JUDGE
      freopen("../input.txt", "r", stdin);
      freopen("../output.txt", "w", stdout);
    #endif

  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;

    vl a(n);
    vl b(n);

    ll minOranges = INT_MAX;
    ll minCandies = INT_MAX;
    rep(i,n)
    {
      cin>>a[i];
      minOranges = min(minOranges, a[i]);
    } 

    rep(i,n)
    {
      cin>>b[i];
      minCandies = min(minCandies, b[i]);
    }  
    
    ll ans = 0;

    for(int i=0;i<n;i++)
    {
      ll diffa = a[i] - minOranges;
      ll diffb = b[i] - minCandies;

      ans+= min(diffa, diffb);
      ans+= abs(diffa - diffb);
    }

    cout<<ans<<endl; 
  }

    
    
    

    return 0;
}