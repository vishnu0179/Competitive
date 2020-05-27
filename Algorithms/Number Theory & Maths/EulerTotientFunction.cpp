#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int phi(int n)
{
    int res = n;

    for (int i = 2; i * i <= n; i++)
    {

        if (n % i == 0)
        {
            res = res / i;
            res = res * (i - 1);
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }

    if (n > 1)
    {
        res /= n;
        res *= (n - 1);
    }

    return res;
}

int sievePhi[1000000];

void phiSieve()
{
    int maxN = 100000;

    for(int i=1;i<=maxN;i++)
    {
        sievePhi[i] = i;
    }

    for(int i=2;i<=maxN;i++)
    {
         if(sievePhi[i]==i)
         {
             for(int j=i;j<=maxN; j+=i)
             {
                sievePhi[j] /= i;
                sievePhi[j] *= (i-1);
             }
         }
    }
}



int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    phiSieve();
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        cout << phi(n) << endl;
        cout<<sievePhi[n]<<endl;
    }

    return 0;
}