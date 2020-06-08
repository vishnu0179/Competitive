// https://codeforces.com/problemset/problem/5/C

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int E[1000001], S[1000001], F[1000001];

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    string str;
    stack<int> stk;
    int mx= 0;

    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        if (ch == '(')
        {
            stk.push(i);
        }
        else
        {
            if (stk.empty())
            {
                S[i] = E[i] = -1;
            }
            else
            {
                int idx = stk.top();
                stk.pop();

                S[i] = E[i] = idx;

                if (idx > 0 && str[idx - 1] == ')' && S[idx - 1] >= 0)
                {
                    E[i] = E[idx - 1];
                }
                int l = i - E[i] + 1;
                F[l]++;
                mx = max(mx, l);
            }
        }
    }

    F[0] = 1;

    cout<<mx<<" "<<F[mx];

    return 0;
}