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
        int n, m;
        cin>>n>>m;

        vector<vector<int>> arr(n, vector<int> (4));


        bool flag = false;

        for(int i=0;i<n;i++)
        {
            cin>>arr[i][0]>>arr[i][1]>>arr[i][2]>>arr[i][3];
            if(arr[i][1] == arr[i][2])
            {
                flag = true;
            }
        }
        if(m%2 == 1)
        {
            cout<<"NO"<<endl;
            continue;
        }

        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }

    }

    return 0;
}