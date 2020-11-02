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

ll calGCD(ll x, ll y)
{
    if(y==0)
        return x;
    else {
        return calGCD(y, x%y);
    }
}

ll LCM(vi arr)
{
    ll lcm = arr[0];
    //cout<<lcm
    int n = arr.size();
    for(int x = 1; x<n;x++)
    {
        ll gcd = calGCD(lcm, arr[x]);
        //cout<<gcd<<"a";
        ll product = lcm * arr[x] * 1LL;

        lcm = product / gcd;
    }

    return lcm;
}

int main() {
    fio;
    #ifndef ONLINE_JUDGE
      freopen("../input.txt", "r", stdin);
      freopen("../output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    vi lcmPairs;
    while(t--)
    {
        int n;
        cin>>n;
        lcmPairs.clear();

        vi arr(n+1);
        vi vis(n+1, 0);

        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }

        unordered_set<int> s;
        s.clear();

        for(int i=1;i<=n;i++)
        {
            int temp = i;
            int count = 0;
            while(vis[temp]==0)
            {
                vis[temp] = 1;
                temp = arr[temp];
                count++;
            }
            //cout<<count<<" ";
            if(count!=0)
            lcmPairs.push_back(count);
        }
        
        cout<<LCM(lcmPairs)<<endl;
        
    }

    return 0;
}