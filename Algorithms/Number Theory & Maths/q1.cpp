#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);

  int t;
  cin>>t;
  ll n,m;
  while(t--)
  {
    cin>>n>>m;

    if(n==1)
    {
        cout<<"0"<<endl;
        continue;
    }

    if(n==2)
    {
        cout<<m<<endl;
        continue;
    }
  }

  return 0;
}