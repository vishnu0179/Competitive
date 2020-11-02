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

    int t;
    cin>>t;
    while(t--)
    {
        
        int n, m;
        cin>>n>>m;
        bool flag = false; 

        vi mhash(m+1, 0);
        vi arr(n);
        int count = 0;
        int gtcount = 0;

        for(int i=0;i<arr.size();i++)
        {
          cin>>arr[i];
          if(arr[i]==m)
          {
              flag = true;
              count++;
          }
          if(arr[i]<m)
          {
              mhash[arr[i]]++;
          }
          else
          {
              gtcount++;
          }
          
        }
        mhash[0] = 1;
        bool flag1 = false;
        rep(i,m)
        {
            if(mhash[i]==0)
            {
                flag1 = true;
                break;
            }
        }


        if(flag1)
        {
            cout<<-1<<endl;
            continue;
        }
        else {
            if(flag)
            {
                cout<<(n-count)<<endl;
            }
            else {
                cout<<n<<endl;
            }
        }



    }

    return 0;
}