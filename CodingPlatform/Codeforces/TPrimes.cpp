#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define rep(i,n) for(auto i=0;i<n;i++)
#define all(x) x.begin(),x.end()
#define fio ios_base::sync_with_stdio(false); cin.tie(0)

#define mod 1000000007

using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ll;
typedef vector<vi> vvi;

bool checkPrime(ll n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }

    return true;
}

int main() {
    fio;
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    while(n--)
    {
        ll temp;
        cin>>temp;

        ll sq = sqrt(temp);

        if(temp == 1)
        {
            cout<<"NO"<<endl;
            continue;
        }

        if((sq * sq) == temp )
        {
            if(checkPrime(sq))
            {
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
        else {
            cout<<"NO"<<endl;
        }

    }

    return 0;
}