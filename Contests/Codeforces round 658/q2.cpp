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

        bool noOne = true;

        rep(i, n)
        {
            cin>>arr[i];
            if(arr[i]==1)
            {
                noOne = false;
            }
        }

        if(noOne)
        {
            cout<<"First"<<endl;
            continue;
        }

        int count = 0;

        for(int i=0;i<n;i++)
        {
            count++;
            if(arr[i]!=1)
            {
                break;
            }
        }

        if(count%2==0)
        {
            cout<<"Second"<<endl;
        }
        else{
            cout<<"First"<<endl;
        }


    }

    return 0;
}