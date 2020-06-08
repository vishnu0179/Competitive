// https://codeforces.com/contest/1363/problem/0

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int countOdd = 0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (temp & 1)
            {
                countOdd++;
            }
        }
        int evenCount = n - countOdd;

        if(x==n && countOdd&2!=0)
        {
            cout<<"Yes"<<endl;
            continue;
        }

        if(countOdd==0)
        {
            cout<<"No"<<endl;
            continue;
        }

        if (x % 2)
        {
            if (countOdd >= x)
            {
                cout << "Yes" << endl;
            }
            else
            {
                if (countOdd % 2)
                {
                    cout << "Yes" << endl;
                }
                else
                {
                    countOdd--;
                    if ((x - countOdd) <= evenCount)
                    {
                        cout << "Yes" << endl;
                    }
                    else
                    {
                        cout << "No" << endl;
                    }
                }
            }
        }
        if (x % 2 == 0)
        {
            if(x!=n && countOdd!=n && countOdd!=0)
            {
                cout<<"Yes"<<endl;
            }
            else {
                cout<<"No"<<endl;
            }

        }

    }

    return 0;
}