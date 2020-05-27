#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll catalanDP(ll n)
{
    ll catalan[n+1];

    catalan[0] = catalan[1] = 1;

    for(int i=2;i<=n;i++)
    {
        catalan[i] = 0;
        for(int j=0;j<i;j++)
        {
            catalan[i]+= catalan[j] * catalan[i-j-1];
        }
    }

    return catalan[n];
}

ll catalanRecursive(ll n)
{
    if(n<=1)
        return 1;

    ll res = 0;

    for(int i=0;i<n;i++)
    {
        res += catalanRecursive(i)*catalanRecursive(n-i-1);
    }
    return res;
}

int main() {
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);

    cout<<catalanDP(20);

  return 0;
}