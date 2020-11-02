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
        ll n, r;
        cin>>n>>r;

        ll sumr = (r * (r+1))/2;

        if(n<=r)
        {
            n--;
            ll sumn = (n * (n+1)/2);
            cout<<sumn+1<<endl;
        }
        else {
            cout<<sumr<<endl;
        }

        
        

    }

    return 0;
}