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

int solve(vi &res, int n)
{
    int ans = 0;

    for (int i = 1; i < n - 1; i++)
    {
        if (res[i] < res[i - 1] and res[i] < res[i + 1])
        {
            ans++;
        }
    }
    return ans;
}

int main()
{
    fio;
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    vi arr(n);
    vi fin;
    rep(i, n)
    {
        cin >> arr[i];
    }

    sort(all(arr));

    vi res(n, 0);
    int j = n - 1;
    for (int i = n - 1; i >= 0; i -= 2)
    {
        res[i] = arr[j];
        j--;
    }
    j = 0;
    for (int i = 0; i < n; i++)
    {
        if (res[i] == 0)
        {
            res[i] = arr[j];
            j++;
        }
    }
    int ans = solve(res, n);

    fin = res;
    vi res2(n);
    j = n - 1;
    int ans2 = 0;

    for (int i = 0; i < n; i += 2)
    {
        res2[i] = arr[j];
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        if (res2[i] == 0)
        {
            res2[i] = arr[j];
            j--;
        }
    }

    ans2 = solve(res2, n);

    if(ans2 > ans)
    {
        fin = res2;
    }

    vi res3(n, 0);
    j = n-1;
    for (int i = 0; i < n; i += 2)
    {
        res3[i] = arr[j];
        j--;
    }
    j=0;
    for (int i = 0; i < n; i++)
    {
        if (res3[i] == 0)
        {
            res3[i] = arr[j];
            j++;
        }
    }

    int ans3 = solve(res3, n);

    if(ans3 > max(ans,ans2))
    {
        fin = res3;
    }

    cout << max({ans, ans2, ans3}) << endl;

        rep(i, n) cout << fin[i] << " ";

    cout << endl;
    return 0;
}