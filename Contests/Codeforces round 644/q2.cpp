#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);

        for(int i=0;i<n;i++)
        {
          cin>>arr[i];
        }

        sort(arr.begin(), arr.end(), greater<int>());

        int ans = INT_MAX;

        for(int i=0;i<n-1;i++)
        {
            ans = min(ans, arr[i]-arr[i+1]);
        }

        cout<<ans<<endl;


    }
  

  return 0;
}