// https://codeforces.com/contest/1362/problem/0
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);

    ll t;
    cin>>t;
    while(t--)
    {
        ll a, b;
        cin>>a>>b;

        if(a==b) {
            cout<<0<<endl;
            continue;
        }
        if(a>b)
        {
            if(a%b!=0)
            {
                cout<<-1<<endl;
                continue;
            }
        }
        else {
            if(b%a!=0)
            {
                cout<<-1<<endl;
                continue;
            }
        }
        ll div = (a>b)?a/b:b/a;
        //cout<<div<<" ";
        if(__builtin_popcountll(div)!=1)
        {
            cout<<-1<<endl;
            continue;
        }

        ll ans = 0;
      
            while(div>1)
            {
                div=div/2;
                ans++;
            }
    
        ll temp = ans / 3;
        if(ans%3!=0)
        {
            temp++;
        }
        else {
        }
        cout<<temp<<endl;


    }
  

  return 0;
}