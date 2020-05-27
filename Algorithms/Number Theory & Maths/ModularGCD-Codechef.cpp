// https://www.codechef.com/problems/GCDMOD

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

typedef long long ll;

ll power(ll a, ll n, ll d)
{ 

    ll res = 1;
    while(n)
    {
        if(n & 1)
        {
            res = (res%d * a%d)%d;
            n--;
        }
        else {
            a = ((a%d) * (a%d))%d;
            n/=2;
        }
    }

    return res;
}

ll solve(ll a, ll b, ll n)
{
    if(a==b)
    {
        return (power(a,n,mod) + power(b,n,mod))%mod;
    }

    ll num = abs(a-b);

    ll res = 1;

    for(ll i=1; i*i<=num;i++)
    {
        if(num%i==0)
        {
            ll temp = (power(a,n,i)+power(b,n,i))%i;

            if(temp == 0)
            {
                res = max(res, i);
            }

            temp = (power(a,n,num/i) + power(b,n,num/i))%(num/i);

            if(temp == 0) res= max(res, num/i);
        }
    }

    return res%mod;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    ll a,b,n;
    while (t--)
    {
        cin>>a>>b>>n;

        cout<<solve(a,b,n)<<endl;
    }
    return 0;
}