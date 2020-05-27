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
        int n, k;
        cin >> n >> k;

        int ans = 1;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                if(k>=i)
                ans = max(ans,i);

                int temp = n/i;

                if(n%temp==0)
                {
                    if(k>=temp)
                    ans = max(ans, temp);
                }

            }
        }

        cout<<n/ans<<endl;

        
    }

    return 0;
}