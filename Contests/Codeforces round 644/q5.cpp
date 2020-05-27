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
        cin>>n;
        vector<vector<char>> arr(n+1, vector<char>(n+1));

        int flag = 1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }

        for(int i=0;i<n;i++)
        {
            arr[n][i] = '1';
        }

        for(int i=0;i<n;i++)
        {
            arr[i][n] = '1';
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[i][j]=='1')
                {
                    if(arr[i+1][j]=='1' or arr[i][j+1]=='1')
                    {

                    }
                    else {
                        flag = 0;
                        break;
                    }
                }
            }
        }

        

        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }

    }

    return 0;
}