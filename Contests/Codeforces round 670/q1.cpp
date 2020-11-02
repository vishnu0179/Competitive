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

        int arr[n];
        vector<int> hash(101, 0);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            hash[arr[i]]++;
        }

        sort(arr, arr+n);

        int ans1 = 0;
        int ans2 = 0;
        
        while(hash[ans1] >= 2 and ans1 < 101)
        {
            ans1++;
            ans2++;
        }

        while(hash[ans2] >= 1 and ans2 < 101)
        {
            ans2++;
        }

        cout<<ans1 + ans2<<endl;
    }

    return 0;
}