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
      freopen("../input.txt", "r", stdin);
      freopen("../output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vi arr(n+1);

        for(int i=1;i<arr.size();i++)
        {
          cin>>arr[i];
        }

        int minNo = n+2;
        int maxNo = 0;
        int intStart = 0;
        int flag= 0;
        bool same  = true;
        for(int i=1;i<=n;i++)
        {
            if(arr[i]!=i)
            {
                same  = false;
                minNo = min(minNo, arr[i]);
                maxNo = max(maxNo, arr[i]); 
            }
            else {

                if(minNo>intStart and maxNo < i)
                {

                }
                else {
                    cout<<2<<" " <<i<<endl;
                    flag = 1;
                    break;
                }

                intStart = i;
                minNo = n+1;
                maxNo = 0;

            }   
        }

        if(same)
        {
            cout<<0<<endl;
            continue;
        }

        if(flag == 0)
        {
            cout<<1<<endl;
        }

    }   

    return 0;
}