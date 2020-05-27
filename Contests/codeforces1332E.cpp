#include<bits/stdc++.h>
#define mod 998244353
#define int long long
using namespace std;


int power(int a, int n)
{
    int res = 1;
    while(n)
    {
        if(n%2)
        {
            res = (res%mod * a%mod)%mod;
            n--;
        }
        else {
            a = (a%mod * a%mod)%mod;
            n/=2; 
        }
    }

    return res;
}

int32_t main() {
  freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);

    int n,m,l,r;
    
    cin>>n>>m>>l>>r;

    int t = r - l + 1;
    int e = r/2 - (l-1)/2;
    int o = t - e;

    if((n*m) & 1)
    {
        cout<<power(t,n*m)<<"\n";
    }
    else
    {
        int sub = power(e+o, n*m) - power(abs(e-o), n*m);
        sub+=mod;
        sub%=mod;

        sub  = (sub * power(2, mod-2))%mod;

        int tot = power(t, n*m);

        int ans = (tot - sub + mod)%mod; 

        cout<<ans<<"\n";
    }
    



  return 0;
}