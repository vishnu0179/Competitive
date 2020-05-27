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
      int a,b;
      cin>>a>>b;

      

      int temp = min(a,b);

       if(2*temp<max(a,b))
       {
           temp = max(a,b);
       }
       else {
            temp = 2*temp;
       } 

      cout<<temp*temp<<endl;

  }

  return 0;
}