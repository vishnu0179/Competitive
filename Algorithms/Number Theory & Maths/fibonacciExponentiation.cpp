#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<vector<ll>> matrix;

matrix mul( matrix a, matrix b)
{
    matrix c(3, vector<ll>(3));
    for(int i=1;i<3;i++)
    {
        for(int j=1;j<3;j++)
        {
            for(int k=1;k<3;k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    return c;
}

matrix pow(matrix a, int n)
{

    if(n==1)
        return a;
    
    if(n%2)
        return mul(a, pow(a, n-1));
    
    matrix X= pow(a,n/2);

    return mul(X,X);
}

int main() {
  //freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);

  vector<ll> f1(3);

  f1[1] = 1;
  f1[2] = 1;

    int n = 2;
    
   matrix T(3, vector<ll>(3));

    T[1][1] = 0, T[1][2] = 1;
    T[2][1] = 1, T[2][2] = 1;

    T = pow(T, n-1);

    ll res = 0;

    for(int i=1;i<3;i++)
    {
        res += T[1][i] * f1[i];
    }

    cout<<res;


  

  return 0;
}