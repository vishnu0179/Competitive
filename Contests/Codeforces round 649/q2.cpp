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
        int n;
        cin>>n;

        vi arr(n);
        
        rep(i,n)
        {
            cin>>arr[i];
        }


        vi ans;
        ans.clear();

        int flag= 0;

        if(arr[0]<arr[1])
        {
            flag =1;
        }
        else {
            flag = 0;
        }

        ans.pb(arr[0]);
        rep(i,n-1)
        {   
            
            if(flag == 0)
            {
                while(arr[i]>arr[i+1]&&i<n-1)
                {
                    i++;
                }
                flag = 1;
                ans.pb(arr[i]);
            }
            
            if(flag == 1 and i<n-1) 
            {
                while(arr[i]<arr[i+1]&&i<n-1)
                {
                    i++;
                }
                flag = 0;
                ans.pb(arr[i]);
            }
            
        }

        if(ans[ans.size()-1]!=arr[n-1])
        {
            ans.pb(arr[n-1]);
        }

        cout<<ans.size()<<endl;

        for(auto x: ans)
        {
            cout<<x<< " "; 
        }
        cout<<endl;
    }


    return 0;
}