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
        int n;
        cin>>n;

        string s;
        cin>>s;

        if(n==1)
        {
            int temp = s[0] - '0';
            if(temp%2)
            {
                cout<<1<<endl;
            }
            else {
                cout<<2<<endl;
            }
            continue;
        }
        int ans = 1;
        if(n%2 == 0)
        {
            ans = 1;
            for(int i=1;i<n;i+=2)
            {
                int temp = s[i] - '0';
                if(temp%2 == 0)
                {
                    ans = 2;
                    break;
                }
            }
        }
        else {
            ans = 2;
            for(int i=0;i<n;i+=2)
            {
                int temp = s[i] - '0';
                if(temp %2)
                {
                    ans = 1;
                    break;
                }
            }
        }

        cout<<ans<<endl;
    }


    return 0;
}