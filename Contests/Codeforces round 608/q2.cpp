// https://codeforces.com/contest/1271/problem/B

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
    // fio;
    // #ifndef ONLINE_JUDGE
    //   freopen("input.txt", "r", stdin);
    //   freopen("output.txt", "w", stdout);
    // #endif

    int n;
    cin >> n;

    string a;
   
    cin >> a;
 string dupa = a;
    int count1 = 0, count2 = 0;

    for (char ch : a)
    {
        if (ch == 'B')
            count1++;
        if (ch == 'W')
            count2++;
    }

    if (count1 == 0 || count2 == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    vi ans;

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == 'W')
        {
            continue;
        }
        else
        {
            a[i] = (a[i] == 'B') ? 'W' : 'B';
            a[i + 1] = (a[i + 1] == 'B') ? 'W' : 'B';
            ans.pb(i+1);
        }
    }

    if (a[n - 1] == 'B')
    {
        ans.clear();
        for (int i = 0; i < n - 1; i++)
        {
            if (dupa[i] == 'B')
            {
                continue;
            }
            else
            {
                dupa[i] = (dupa[i] == 'B') ? 'W' : 'B';
                dupa[i + 1] = (dupa[i + 1] == 'B') ? 'W' : 'B';
                ans.pb(i+1);
            }
        }
    }
    else
    {
        cout << ans.size() << endl;
        for (auto x : ans)
        {
            cout << x << " ";
        }
        return 0;
    }

    if (dupa[n - 1] == 'W')
    {
        cout << -1 << endl;
        return 0;
    }
    else
    {
        cout << ans.size() << endl;
        for (auto x : ans)
        {
            cout << x << " ";
        }
        return 0;
    }
    return 0;
}