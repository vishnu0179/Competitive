// https://www.codechef.com/problems/GCDQ

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;

    while (t--)
    {
        int n, q;

        int l, r;
        cin >> n >> q;
        vector<int> a(n + 1);

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        vector<int> pre(n + 1);
        vector<int> suff(n + 2);

        pre[0] = suff[n + 1] = 0;

        for (int i = 1; i <= n; i++)
        {
            pre[i] = gcd(pre[i - 1], a[i]);
        }

        for (int i = n; i >= 1; i--)
        {
            suff[i] = gcd(suff[i + 1], a[i]);
        }

        while (q--)
        {
            cin >> l >> r;

            cout << gcd(pre[l - 1], suff[r + 1]) << endl;
        }
    }

    return 0;
}