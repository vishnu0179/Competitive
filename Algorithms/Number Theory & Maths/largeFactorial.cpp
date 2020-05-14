#include<bits/stdc++.h>
#define MAX 800
using namespace std;

typedef long long ll;

int multiply(int res[], int res_size, int i)
{
    int carry = 0;

    for(int x=0;x<res_size;x++)
    {
        int prod = res[x] *i + carry;

        res[x] = prod % 10;
        carry = prod/10;
    }

    while(carry)
    {
        res[res_size] = carry%10;
        carry/=10;
        res_size++;
    }
    return res_size;
}

int main() {
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);

    int res[MAX];

    res[0] = 1;
    int res_size = 1;

    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        res_size = multiply(res, res_size, i);
    }

    for(int i=res_size-1;i>=0;i--)
    {
        cout<<res[i];
    }

  

  return 0;
}