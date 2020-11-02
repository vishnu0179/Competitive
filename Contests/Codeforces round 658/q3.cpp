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

void solve(string &a , int p)
{
    if(p==1)
    {
        if(a[0]=='0')
        {
            a[0] = '1';
        }
        else {
            a[0] = '0';
        }
        return ;
    }
    for(int i=0;i<p; i++)
    {
        if(a[i]=='0')
        {
            a[i] = '1';
        }
        else {
            a[i] = '0';
        }
    }

    reverse(a.begin(), a.begin() + p);
}

int main() {
    fio;
    #ifndef ONLINE_JUDGE
      freopen("../input.txt", "r", stdin);
      freopen("../output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    vi ans;
    while(t--)
    {
        int n;
        cin>>n;

        string a, b;

        cin>>a>>b;


        ans.clear();
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]==b[i])
            {

            }
            else if(a[0]==b[i])
            { 
                solve(a, 1);
                solve(a, i+1);
                ans.pb(1);
                ans.pb(i+1);
            }
            else {
                solve(a, i+1);
                ans.pb(i+1);
            }
        }

        cout<<ans.size()<<" ";
        for(int i=0;i<ans.size();i++)
        {
          cout<<ans[i]<<" ";
        }

        cout<<endl;

    }

    return 0;
}