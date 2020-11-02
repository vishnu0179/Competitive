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
//     freopen("../input.txt","r",stdin);
//   freopen("../output.txt","w",stdout);

    int n;

    cin>>n;

    string groom;
    string brides;

    cin>>groom;
    cin>>brides;
    int rumCountg = 0;
    int moCountg = 0;

    int rumCountb = 0;
    int moCountb = 0;

    for(int i=0;i<n;i++)
    {
      if(groom[i]=='r')
      {
          rumCountg++;
      }
      else {
          moCountg++;
      }

    }

    for(int i=0;i<n;i++)
    {
      if(brides[i]=='r')
      {
          rumCountb++;
      }
      else {
          moCountb++;
      }
    }

    if(rumCountb == rumCountg)
    {
        cout<<0;
    }
    else if(rumCountb < rumCountg)
    {
        int i = 0;

        while(rumCountb>=0)
        {
            if(groom[i]=='r')
            {
                rumCountb--;
            }
            i++;
        }

        cout<<n-i+1;
    }
    else {
        int i = 0;

        while(moCountb>=0)
        {
            if(groom[i]=='m')
            {
                moCountb--;
            }
            i++;
        }

        cout<<n-i+1;
    }



    return 0;
}