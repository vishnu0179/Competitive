#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define rep(i, n) for (auto i = 0; i < n; i++)
#define all(x) x.begin(), x.end()
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0)

#define mod 1000000007

using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ll;
typedef vector<vi> vvi;

int main()
{
    fio;
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        int i= 0;
        while(n >= 0)
        {
            ll temp = pow(2, i+1) - 1LL;
            ll stepCount = (temp*(temp+1))/2;
            n = n - stepCount;
            i++;
        }

        cout << i-1 << endl;
    }

    return 0;
}