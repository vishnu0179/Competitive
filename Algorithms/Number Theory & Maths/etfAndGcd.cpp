// ans = sum(GCD(i,n)) where i=1 to N

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int phi[100001];

int getCount(int d, int n)
{
    return phi[n/d];   
}

void sieve()
{
    int maxN = 100000;
    for(int i=1; i<=maxN; i++)
    {
        phi[i] = i;
    }

    for(int i=2;i<=maxN;i++)
    {
        if(phi[i]==i)
        {
            for(int j=i; j<=maxN; j+=i)
            {
                phi[j]/=i;
                phi[j] *= (i-1);
            }
        }
    }
}


int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin>>n;

    int res = 0;

    sieve();

    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            int d1 = i;
            int d2 = n/i; 

            res += d1 * getCount(d1,n);

            if(d1!=d2)
                res+= d2 * getCount(d2, n);
        }
    }

    cout<<res;

    return 0;
}