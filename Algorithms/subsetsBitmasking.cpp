// Generate subsets for a set using bit masking

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};

    int n;
    cin>>n;

    int tot = 1<<n;

    for(int mask = 1; mask<tot; mask++)
    {
        for(int i=0;i<n;i++)
        {
            int f = 1<<i;
            if(mask & f)
            {
                cout<<arr[i]<<" ";
            }
        }

        cout<<endl;
    }

    return 0;
}