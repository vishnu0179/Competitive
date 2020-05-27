#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool primes[90000001] = {false};

int main() {
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);

    int maxN = 90000000;

    int n = sqrt(maxN);

    primes[0] = primes[1] = true;

    for(int i = 2; i<n;i++)
    {
        if(!primes[i])
        {
            for(int j=i*i; j<= maxN; j+=i)
            {
                primes[j] = true;
            }   
        }
    }

    vector<int> primeList;

    for(int i=2;i<= maxN; i++)
    {
        if(!primes[i])
            primeList.push_back(i);
    }

    int q, k;

    cin>>q;
    
    while(q--)
    {
        cin>>k;
        cout<<primeList[k-1]<<endl;
    }
  

  return 0;
}