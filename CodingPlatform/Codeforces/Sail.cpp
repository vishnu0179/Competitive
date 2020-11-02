// http://codeforces.com/problemset/problem/298/B

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

    ll t, sx, sy, ex, ey;

    cin>>t>>sx>>sy>>ex>>ey;

    string wind;
    cin>>wind;

    ll reqdx = ex - sx;
    ll reqdy = ey - sy;

    //cout<<reqdx<<" "<<reqdy<<endl;

    ll countx = 0;
    ll timex = 0;
    ll county = 0;
    ll timey = 0;

    if(reqdx<0)
    {
      for(int i= 0; i<wind.size() and abs(reqdx) != countx;i++)
      {
        if(wind[i]=='W')
        {
          countx++;
          timex = i+1;
        }
      }
    }
    else {
      for(int i= 0; i<wind.size() and abs(reqdx) != countx;i++)
      {
        if(wind[i]=='E')
        {
          countx++;
          timex = i+1;
        }
      }
    }

    if(reqdy < 0)
    {
      for(int i= 0; i<wind.size() and abs(reqdy) != county;i++)
      {
        if(wind[i]=='S')
        {
          county++;
          timey = i+1;
        }
      }
    }
    else {
      for(int i= 0; i<wind.size() and abs(reqdy) != county;i++)
      {
        
        if(wind[i]=='N')
        {
          county++;
          timey = i+1;
        }
      }
    };

    //cout<<countx<<abs(reqdx);
    
  
  if(countx==abs(reqdx) and county == abs(reqdy))
  {
    cout<<max(timex, timey);
  }
  else {
    cout<<-1;
  }



    return 0;
}