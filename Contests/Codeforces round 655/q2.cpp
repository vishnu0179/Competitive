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

int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);      
} 

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

        if(n%2==0)
        {
            cout<<n/2<<" "<<n/2<<endl;
            continue;
        }

        int ans = INT_MIN;

        for(int i=2;i*i<=n;i++)
        {
           if(n%i==0)
           {
               ans = n/i;
               break;
           }
        }

        if(ans == INT_MIN)
        {
            cout<<1<<" "<<n-1<<endl;
        }
        else {
            cout<<n - ans<<" "<<ans<<endl;
        }

    }

    return 0;
}