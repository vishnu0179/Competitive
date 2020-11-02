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

        vector<string> arr(n);

        rep(i,n)
        {
            cin>>arr[i];
        }

        vector<int> hash(26, 0);

        for(auto s: arr)
        {
            for(auto ch: s)
            {
                hash[ch-'a']++;
            }
        }
        bool ans = true;
        for(int i=0;i<26;i++)
        {
            if(hash[i]%n != 0)
            {
                ans  = false;
                break;
            }
        }

        if(ans)
        {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }

    }   

    return 0;
}