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

    int t;
    cin>>t;

    
    while(t--)
    {
        int n;
        cin>>n;

        int count = 0;
        unordered_map<int, int> mp;
        rep(i, n)
        {
            int temp;
            cin>>temp;
            mp[temp] += 1;

            if(mp[temp]==1)
            {
                count++;
            }
        }

        cout<<count<<endl;
    }

    return 0;
}