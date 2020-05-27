#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);

    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
      vector<int> arr(n);
      vector<int> e(n+1, 0);

        for(int i=0;i<n;i++)
        {
          cin>>arr[i];
          e[arr[i]]++;
        }

        sort(arr.begin(), arr.end());

        queue<int> q;
        
        int sum = 0;

        for(int i=0;i<n;i++)
        {
            q.push(arr[i]);

            if(q.size()==q.back())
            {
                while(!q.empty())
                    q.pop();
                sum++;
            }
        
        }
        cout<<sum<<endl;

    }
  

  return 0;
}