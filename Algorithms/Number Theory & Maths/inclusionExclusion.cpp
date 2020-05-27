// INclusion exclusion principle using bitmasking.

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int arr[] = {2, 3, 5, 7};

    int n = sizeof(arr)/sizeof(arr[0]);

    int no;
    cin>>no;

    int ans = 0;
    for(int i=1 ;i<1<<n;i++)
    {
        int mask  = i;
        int bits = __builtin_popcount(mask);
        int temp = 1;
        int pos = 0;

        while(mask>0)
        {
            int lBit = (mask & 1);
            if(lBit)
            {
                temp *= arr[pos];
            }
            mask>>=1;
            pos++;
        }

        if(bits & 1)
        {
            ans += no/temp;
        }
        else {
            ans -= no/temp;
        }
    }

    cout<<ans;

    return 0;
}