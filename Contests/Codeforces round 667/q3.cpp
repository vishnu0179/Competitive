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

int getDivisor(int n, int k)
{
    int ans = n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int temp = n / i;

            if (i >= k)
            {
                ans = min(ans, i);
            }

            if (temp >= k)
            {
                ans = min(ans, temp);
            }
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

    int t;
    cin >> t;
    vi ans;
    while (t--)
    {
        int n, x, y;
        ans.clear();

        cin >> n >> x >> y;

        int num = y - x;

        if (n == 2)
        {
            cout << x << " " << y << endl;
        }
        else if(num+1 <= n)
        {
            int a = x;
            int div = 1;
            while(a<=y)
            {
                ans.push_back(a);
                a = a + div;
                n--;
            }

            a = x - div;
            while(a > 0 and n > 0)
            {
                ans.push_back(a);
                a = a - div;
                n--;
            }

            a = y + div;
            while(n > 0)
            {
                ans.push_back(a);
                a = a + div;
                n--;
            }

            for(auto ele: ans)
            {
                cout<<ele<<" ";
            }

            cout<<endl;

        }
        else
        {
            int temp = num/n + 1;
            int div = getDivisor(num, temp);

            int a = x;
            while(a<=y)
            {
                ans.push_back(a);
                a = a + div;
                n--;
            }

            a = x - div;
            while(a > 0 and n > 0)
            {
                ans.push_back(a);
                a = a - div;
                n--;
            }

            a = y + div;
            while(n > 0)
            {
                ans.push_back(a);
                a = a + div;
                n--;
            }

            for(auto ele: ans)
            {
                cout<<ele<<" ";
            }

            cout<<endl;



        }
    }

    return 0;
}