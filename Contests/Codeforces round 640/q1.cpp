#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int smallestDiv(int n)
{

    for(int i=3;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return i;
    }

    return n;
}

int main() {


  int t;
  cin>>t;

  int n,k;
  while(t--)
  {
    cin>>n>>k;

    if(n%2==0)
    {
        cout<<(n+k*2)<<endl;
        continue;
    }

    while(n%2!=0&&k>0)
    {
        n = smallestDiv(n)+n;
        k--;
    }

    cout<<(n+2*k)<<endl;

  }

  return 0;
}