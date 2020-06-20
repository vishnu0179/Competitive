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
        int n, x;
        cin>>n>>x;


        int sum = 0;
        vi arr(n);

        int mini = INT_MAX;

        rep(i,n)
        {
            cin>>arr[i];
            sum+=arr[i];

            if(arr[i]%x!=0)
            {
                mini = min(mini, min(n-i-1, i));
            }
        }

        if(x==1 || n==0)
        {
            cout<<-1<<endl;
            continue;
        }

        if(sum%x!=0)
        {
            cout<<n<<endl;
        }
        else {
            if(mini==INT_MAX)
            {
                cout<<-1<<endl;
            }
            else {
                //cout<<mini<<" ";
                cout<<n-mini-1<<endl;
            }
            
        }




      
    }

    return 0;
}