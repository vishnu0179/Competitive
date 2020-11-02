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
        int n, k;
        cin>>n>>k;

        if(k>=n)
        {
            cout<<(k-n)<<endl;
        }
        else {
            
            if(n%2==0 and k%2==0)
            {
                cout<<0<<endl;
            }
            else if(n%2 == 1 and k%2==0)
            {
                cout<<1<<endl;
            }
            else if(n%2 == 0 and k%2==1)
            {
                cout<<1<<endl;
            }
            else {
                cout<<0<<endl;
            }
        }


    }

    return 0;
}