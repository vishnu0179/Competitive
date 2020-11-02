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
        int n, k;
        cin>>n>>k;

        vi arr(n);
        vi w(k);

        for(int i=0;i<arr.size();i++)
        {
          cin>>arr[i];
        }

        for(int i=0;i<w.size();i++)
        {
          cin>>w[i];
        }

        sort(w.begin(), w.end());
        sort(arr.begin(), arr.end());

        ll sum = 0;

        int s = n-1; int e = n-k;
        for(int i=0;i<k;i++)
        {   
            if(w[i]==1)
            {
                sum = sum + arr[s] + arr[s];
            }
            else {
                //cout<<arr[e];
                e = e - w[i] + 1;
                sum = sum + arr[s] + arr[e];
            }   
            s--;
        }

        cout<<sum<<endl;

    }

    return 0;
}