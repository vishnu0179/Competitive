#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void primeFactorization(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i == 0)
        {
            int count = 0;
            while(n%i==0)
            {
                count++;
                n/=i;
            }

            cout<<i<<"^"<<count<<"\n";
        }
    }

    if(n>1)
    {
        cout<<n<<"^1"<<endl;
    }
}

vector<int> arr(10000001,1);

void sieve()
{
    int maxN = 10000000;
    for(int i=2;i<=maxN;i++)
    {
        if(arr[i] == 1)
        {
            for(int j=i;j<=maxN;j+=i)
            {
                if(arr[j]==1)
                {
                    arr[j] = i;
                }
            }
        }
    }
    //cout<<arr[0];
}

void primeFactorizationSieve(int n)
{
    while(arr[n]!=n)
    {
        cout<<arr[n]<<" ";
        n = n / arr[n];
    }

    cout<<n<<endl;
}


int main() {
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);

  sieve();
    //cout<<arr[7];
    primeFactorization(2*5*6*8*7*17);
    primeFactorizationSieve(2*5*6*8*7*17);


  return 0;
}