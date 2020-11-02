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

        rep(i,n)    cin>>arr[i];


        int cnt = 0;

        for(int i=1;i<n;i++)
        {
            if(arr[i-1] > arr[i])
            {
                cnt++;
            }
        }


        if(cnt == n-1)
        {
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}