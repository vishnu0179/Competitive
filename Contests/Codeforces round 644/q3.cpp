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

        vector<int> arr(n);
        int evenCount = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                evenCount++;
            }
        }

        sort(arr.begin(), arr.end());

        int oddCount = n-evenCount;

        if(oddCount%2==0)
        {
            cout<<"YES"<<endl;
            continue;
        }

        int flag=1;

        for(int i=0;i<n;i++)
        {
            if(arr[i+1]-arr[i]==1)
            {
                flag = 0;
                break;
            }
        }

        if(flag)
        {
            cout<<"NO"<<endl;
        }
        else {

            cout<<"YES"<<endl;
        }
    }

    return 0;
}