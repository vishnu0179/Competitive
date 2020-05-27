#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll minDigit(ll a)
{
    ll mini = 10;

    while(a)
    {
        mini = min(a%10, mini);
        a/=10;
    }

    return mini;
}

ll maxDigit(ll a)
{
    ll maximum = INT_MIN;
    while(a)
    {
        maximum = max(a%10, maximum);
        a/=10;
    }

    return maximum;
}


int main() {
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);

  int t;
  cin>>t;
  while(t--)
  {
    ll a, k;
    cin>>a>>k;

    

    for(int i=0;i<k-1;i++)
    {
        if(minDigit(a)==0)
        {
            break;
        }
        ll result = a + minDigit(a) * maxDigit(a);
        a = result;
    }

    cout<<a<<endl;



  }

  return 0;
}