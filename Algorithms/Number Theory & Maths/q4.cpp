#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
          string s;
        cin>>s;

        if(n==1)
        {
            cout<<"0"<<endl;
            continue;
        }

      
        vector<int> a;
        a.clear();
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                a.push_back(i);
            }
        }

        int count = 0;

        for(int i = 0;i<a.size()-1;i++)
        {
            int temp = a[i+1] - a[i];
            if(temp>=2*k&&i==0)
            {
                a.erase(a.begin());
                count++;
                i--;
            }
            else if(temp>k)
            {
                a.insert(a.begin()+i, i+k);
                count++;
            }
            else if(temp<k)
            {
                a.erase(a.begin() + i);
                i--;
                count++;
            }
        }

        cout<<count<<endl;




      
    }
  

  return 0;
}