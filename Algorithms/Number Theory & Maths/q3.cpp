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
        ll n;
        cin>>n;

        ll temp = n/2;
        ll res= 0;

        ll ele = 8;
        for(int i=1;i<=temp;i++)
        {
            res = res+ ele*i;
            ele+=8;
        }   

        cout<<res<<endl;

    }
  

  return 0;
}