#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define rep(i,n) for(auto i=0;i<n;i++)
#define all(x) x.begin(),x.end()
#define fio ios_base::sync_with_stdio(false); cin.tie(0)

#define mod 1000000007

using namespace std;

typedef long long ll;

int main() {
    fio;
    #ifndef ONLINE_JUDGE
      freopen("../input.txt", "r", stdin);
      freopen("../output.txt", "w", stdout);
    #endif

    ll t;
    cin>>t;
    while(t--)
    {
        ll a, b, x, y, n;

        cin>>a>>b>>x>>y>>n;
        
        if(a < b)
        {
            swap(a,b);
            swap(x, y);
        }

        ll oa = a;
        ll ob = b;

        ll on = n;
        // first way
        if(n>=(b-y))
        {
            n = n-(b-y);
            b = y;
            
        }
        else {
            b = b - n;
            n= 0;
        }

        //cout<<n;
        if(n)
        {
            a = a - min(a-x, n);
        }
        //cout<<a;
        ll ans1 = a * b;

        a = oa;
        b = ob;
        n = on;

        if(n>=(a-x))
        {
            n = n-(a-x);
            a = x;
            
        }
        else {
            a = a - n;
            n= 0;
        }

        if(n)
        {
            b = b - min(b-y, n);
        }

        ll ans2 = a*b;

        cout<<min(ans1, ans2)<<endl;


    }

    return 0;
}