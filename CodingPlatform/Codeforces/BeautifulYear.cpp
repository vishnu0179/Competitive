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

bool checkDistinct(int n)
{
    set<int> s;
    while(n>0)
    {
        s.insert(n%10);
        n/=10;
    }

    return s.size()==4;
}

int main() {
    fio;
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    int a;
    cin>>a;
    a++;
    while(1)
    {
        if(checkDistinct(a))
        {
            cout<<a;
            break;
        }
        a++;
    }


    return 0;
}