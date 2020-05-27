// Binomial coefficient usin modulo inverse

#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

typedef long long ll;

ll F[1000001];

int power(ll a, ll p)
{
    int res = 1;
    while (p)
    {
        if (p & 1)
        {
            res = (res * 1LL * a) % mod;
            p--;
        }
        else
        {   
            p /= 2;
            a = (a * 1LL * a) % mod;
        }

        return res;
    }
}

int C(ll n, ll k)
{
    if (k > n)
        return 0;

    int res = F[n];

    res = (res * 1LL * power(F[n-k], mod-2))%mod;

    res = (res * 1LL * power(F[k], mod - 2))%mod;


    return res;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    F[0] = F[1] = 1;

    for (int i = 2; i <= 1000000; i++)
    {
        F[i] = (F[i - 1] * i) %  mod;
    }

    ll q, n, k;
    cin>>q;

    while (q--)
    {
        cin >> n >> k;
        cout << C(n, k) << endl;
    }

    return 0;
}