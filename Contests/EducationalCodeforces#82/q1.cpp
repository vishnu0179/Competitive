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
    int n, m, k;
    cin>>n>>m>>k;

    int temp = n/k;

    if(temp>=m||m==0)
    {
        cout<<m<<endl;
    }
    else {
        int rem = m - temp;
        int temp2 = 0;
        if(rem%(k-1)==0)
        {
            temp2 = rem/(k-1);
        }
        else {
            temp2= rem/(k-1)+1;
        }

        if(temp==temp2)
        {
            cout<<0<<endl;
        }
        else {
            cout<<temp-temp2<<endl;
        }
    }

  }

  return 0;
}