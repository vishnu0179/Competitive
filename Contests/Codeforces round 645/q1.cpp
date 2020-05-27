#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int temp = n * m;

        if (temp % 2)
        {
            cout << temp / 2 + 1 << endl;
        }
        else
        {
            cout << temp / 2 << endl;
        }
    }

    return 0;
}