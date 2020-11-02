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

    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;

        vi hash1(1001,0);
        //vi hash2(1001, 0);

        int ans=  -1;

        rep(i,n)
        {
            int temp;
            cin>>temp;
            hash1[temp]++;
        }

        rep(i,m)
        {
            int temp;
            cin>>temp;
            //hash2[temp]++;
            if(ans==-1)
            {
                if(hash1[temp])
                {
                    ans = temp;
                }
            }
        }

        if(ans==-1)
        {
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
            cout<<1<<" "<<ans<<endl;
        }
    }

    return 0;
}