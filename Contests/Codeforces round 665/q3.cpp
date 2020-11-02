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
        int n;
        cin >> n;

        vector<pair<int, int>> arr(n);

        int min_el = INT_MAX;
        rep(i, n)
        {
            cin >> arr[i].first;
            min_el = min(arr[i].first, min_el);
            arr[i].second = i;
        }

        sort(arr.begin(), arr.end());

        vector<int> temp;


        bool ans = true;
        for (int i = 0; i < n; i++)
        {
            //int curr = i;
            //temp.clear();
            if(arr[i].second != i)
            {
                temp.push_back(arr[i].first);
            }
        }

        if (temp.size() != 0)
        {
            for( auto ele : temp)
            {
                if(min_el != __gcd(min_el, ele))
                {
                    ans = false;
                    break;
                }
            }
        }

        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}