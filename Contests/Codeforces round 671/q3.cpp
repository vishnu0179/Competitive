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
        int x;

        cin>>n>>x;

        vector<ll> arr(n);

        ll sum = 0;
        int cntx= 0;

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i] == x)
            {
                cntx++;
            }
            sum = sum + arr[i];
        }

        ll avg = sum/n;

        if(cntx == n)
        {
            cout<<0<<endl;
        }
        else if(avg*n*1LL == sum and avg == x)
        {
            cout<<1<<endl;
        }
        else if(cntx > 0)
        {
            cout<<1<<endl;
        }
        else {
            cout<<2<<endl;
        }


    }

    return 0;
}