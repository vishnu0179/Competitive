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
        int n, k;
      cin>>n>>k;

      vector<int> a(n);
      vector<int> b(n);

      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }

      for(int i=0;i<n;i++)
      {
        cin>>b[i];
      }

      sort(a.begin(), a.end());
      sort(b.begin(), b.end(), greater<int>());

      int i = 0,j;
       int flag=1;
      while(k>0&&flag==1)
      {
          if(a[i]<b[i])
          {
              swap(a[i], b[i]);
              i++;
              k--;
          }
          else {
              flag = 0;
          }
      }

        int sum = 0;
      for(int i=0;i<n;i++)
      {
          sum+=a[i];
      }

      cout<<sum<<endl;


    }
  

  return 0;
}