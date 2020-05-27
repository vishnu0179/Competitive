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
        int n;
        cin >> n;
        vector<int> arr(n + 1, 0);
        //vector<int> hash(n+2,0);

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
           
        }

        sort(arr.begin(), arr.end());
        int ans = 0;
        int temp = 0;

        int i= n;
        for(;i>=1;i--)
        {
            if(arr[i]<=i)
            {
                break;
            }
            else {
            }
        }
        cout<<i+1<<endl;
    }

    

    return 0;
}