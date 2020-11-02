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

        string s;
        cin >> s;

        string temp = "abacaba";

        bool flag = false;

        int found = s.find(temp);

        if (found == string::npos)
        {
            for (int i = 0; i < n - 6; i++)
            {
                int j = 0;

                while (j < 7)
                {
                    if (s[i + j] == temp[j] or s[i + j] == '?')
                    {
                        if (s[i + j] == '?')
                        {
                            s[i + j] = temp[j];

                            
                        }
                    }
                    else
                    {
                        break;
                    }
                    j++;
                    if (j == 7)
                    {
                        flag = true;
                    }
                }

                if (flag)
                {
                    break;
                }
            }
        }
        else
        {
            int found2 = s.find(temp, found + 1);
            if (found2 != string::npos)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "Yes" << endl;
                for (auto ch : s)
                {
                    if (ch == '?')
                        cout << "z";
                    else
                    {
                        cout << ch;
                    }
                }
                cout << endl;
            }
            continue;
        }

        if (flag)
        {
            cout << "Yes" << endl;
            for (auto ch : s)
            {
                if (ch == '?')
                    cout << "z";
                else
                {
                    cout << ch;
                }
            }
        }
        else
        {
            cout << "No";
        }
        cout << endl;

    }

    return 0;
}