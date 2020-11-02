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

        vi arr(n);

        for(int i=0;i<arr.size();i++)
        {
          cin>>arr[i];
        }

        int p1 = 0;int p2 = -1 ;int p3=-1;

        int i=1;

        while(arr[i]<arr[i-1] and i<n-1)
        {
            p1 = i;
            i++;
        }

        if(i==n-1)
        {
            cout<<"NO"<<endl;
            continue;
        }

        p2 = i;

        while(arr[i]>arr[i-1] and i<n-1)
        {
            p2 = i;
            i++;
        }

        if(arr[i]<arr[p2])
        {
            p3 = i;
        }


        if(p2==-1 or p3==-1)
        {
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
            cout<<p1+1<<" "<<p2+1<<" "<<p3+1<<endl;
        }

    }

    return 0;
}