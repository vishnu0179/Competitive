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
        int n,k;
        string a;

        cin>>n>>k;
        cin>>a;

        int ans = 0;
        int flag = -1;
        int count = 0;
        for(int i=0;i<=k;i++)
        {
            if(a[i]=='1')
            {
                flag = i;
                break;
            }
        }

        if(flag == -1)
        {
            ans++;
            count = k;
            flag = k+1;
        }
        
        for(int i = min(k+1, flag); i<n;i++)
        {
            if(a[i]=='1')
            {
                count = 0;
            }
            else {
                count++;
            }
            if(count==2*k+1)
            {
                ans++;
                count = k;
            }
        }

        if(count>=k+1)
        {
            ans++;
        }

        cout<<ans<<endl;
    }

    return 0;
}