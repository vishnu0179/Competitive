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

int main() {
    fio;
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    int n, s, t;

    cin>>n>>s>>t;

    vi arr(n+1);

    vector<bool> hash(n+1, false);

    int count = 0;
    int pos = -1;

    for(int i=1;i<arr.size();i++)
    {
      cin>>arr[i];
      if(arr[i]==s)
      {
        pos = i;
      }
    }

    if(s==t)
    {
        cout<<0<<endl;
        return 0;
    }

    while(hash[s]== false and s != t)
    {   
        hash[s] = true;
        s = arr[s];
        count++;
    }

    if(s!=t)
    {
        cout<<-1<<endl;
    }
    else {
        cout<<count;
    }





    return 0;
}