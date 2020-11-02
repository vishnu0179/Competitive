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

    int n;
    cin >> n;

    vi ans(n, 0);
    int j = 1;
    int cnt = 0;
    int i = 0;

    int pos1 = 0;
    while (cnt < n - 1)
    {
        std::cout << "? " << i + 1 << " " << j + 1 << endl;
        std::cout.flush();
        int x1;
        cin >> x1;
        std::cout << "? " << j + 1 << " " << i + 1 << endl;
        std::cout.flush();
        int x2;
        cin >> x2;

        if (x1 >= x2)
        {
            ans[i] = x1;
            i = j;
        }
        else
        {
            ans[j] = x2;
        }
        j++;
        if (j >= n)
        {
            break;
        }
        cnt++;
    }

    ans[i] = n;

    
    std::cout << "! ";
    for (int i = 0; i < n; i++)
    {
        std::cout << ans[i] << " ";
    }
    std::cout << endl;
    std::cout.flush();

    return 0;
}