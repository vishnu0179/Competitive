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
        int n, m, x, y;
        cin >> n >> m >> x >> y;

        char c;
        int temp = 0;
        int ans= 0;
        int whites = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> c;
                if(c=='.')
                {
                    temp++;
                    whites++;
                }
                else {
                    temp=0;
                }

                if(temp==2)
                {
                    ans++;
                    temp=0;
                }
            }
            temp = 0;
        }

        if(x*2<y)
        {
            cout<<whites*x<<endl;
        }
        else {
            cout<<(whites-ans*2)*x + ans*y<<endl;
        }

        
    }

    return 0;
}