// Recursive Subsequence
/*Sequence (ai) of natural numbers is defined as follows:

   ai = bi (for i <= k)
   ai = c1ai-1 + c2ai-2 + ... + ckai-k (for i > k)

where bj and cj are given natural numbers for 1<=j<=k. Your task is to compute an for given n and output it modulo 10^9.*/

#include<bits/stdc++.h>
#define M 1000000000
using namespace std;


typedef long long ll;
typedef vector<vector<ll>> matrix;


matrix mul( matrix a, matrix b)
{
    matrix res(a.size(), vector<ll> (a.size()));
    for(int i=1;i<a.size();i++)
    {
        for(int j=1;j<a.size();j++)
        {
            for(int k=1;k<a.size();k++)
            {
                res[i][j] = res[i][j] + (a[i][k] * b[k][j]%M)%M;
            }
        }
    }

    return res;
}

matrix pow(matrix t, int n)
{
    if(n==1)
        return t;
    
    if(n%2)
        return mul(t,pow(t, n-1));

    matrix X = pow(t,n/2);

    return mul(X,X);
}


ll solve( matrix t, matrix f, int n, int k)
{
    matrix temp = pow(t,n-k);
    ll res = 0;
    for(int i=1;i<=k;i++)
    {
        res += (temp[k][i] * f[i][1])%M;
    }

    return res;
}


int main() {
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);

  int t;
  cin>>t;

  int k, n;
  while(t--)
  {
    cin>>k;
    vector<ll> a(k+1);
    vector<ll> b(k+1);

    for(int i=1;i<a.size();i++)
    {
      cin>>a[i];
    }

    for(int i=1;i<b.size();i++)
    {
      cin>>b[i];
    }

   
    
      cin>>n;

    matrix T(k+1, vector<ll> (k+1));

    for(int i=2;i<=k;i++)
    {
        T[i-1][i] = 1;
    }

    for(int i=1;i<=k;i++)
    {
        T[k][i] = b[k-i+1];
    }

    matrix f1(k+1, vector<ll> (2));

    for(int i=1;i<=k;i++)
    {
        f1[i][1] = a[i];
    }

    cout<<solve(T, f1, n, k)<<endl;
    

  }

  return 0;
}