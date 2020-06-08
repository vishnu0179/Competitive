// https://codeforces.com/contest/1362/problem/B

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;


        //vector<int> hash(1025,0);

        set<int> s;

        for(int i=0;i<n;i++)
        {
          int temp;
          cin>>temp;

          s.insert(temp);
        }

int ans = -1;
        for(int i=1;i<=1024;i++)
        {
            set<int> a;
            for(auto x: s)
            {
                a.insert(x^i);
            }
            if(a==s)
            {
                ans = i;
                break;
            }
        }

        cout<<ans<<endl;

    }
  

  return 0;
}