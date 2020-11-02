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
typedef vector<ll> vl;

int solve(ll n, vi &digits)
{
    int sum = 0;
    while (n)
    {
        int temp = n % 10;
        sum += temp;
        digits.push_back(temp);
        n = n / 10;
    }

    return sum;
}

int increment(vi &digit, int i)
{
    int n = digit.size();
    int sum = 0;
    int c = 1;
    while (c and i < n)
    {
        digit[i]++;
        c = digit[i] / 10;
        digit[i] = digit[i] % 10;
        i++;
    }

    if (c)
    {
        digit.push_back(c);
    }

    for (auto d : digit)
    {
        sum = sum + d;
    }

    return sum;
}

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
        ll n, s;
        cin >> n >> s;

        vi digit;
        int currSum = solve(n, digit);
        ll ans = 0;
        ll pw = 1;

        if (s >= currSum)
        {
            //cout<<currSum;
            cout << 0 << endl;
        }
        else
        {
            int diff = s - currSum;

            for (int i = 0; i < digit.size();)
            {
                
                if (digit[i] != 0)
                {
                    ans = ans + (10 - digit[i] * 1LL) * pw;

                    digit[i] = 0;
                    currSum = increment(digit, i + 1);
                    if (currSum <= s)
                    {
                        break;
                    }
                }
                pw *= 10LL;
                i++;
                // if(i < digit.size())
                // digit[i] = digit[i] + 1;
            }

            cout << ans << endl;
        }
    }
    return 0;
}