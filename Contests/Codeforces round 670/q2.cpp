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
typedef long long int ll;
typedef vector<vi> vvi;

int main() {
    fio;
    #ifndef ONLINE_JUDGE
      freopen("../input.txt", "r", stdin);
      freopen("../output.txt", "w", stdout);
    #endif

    int t;
    vector<ll> ans; 
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<ll> arr(n);

        rep(i,n)    cin>>arr[i];

        sort(all(arr), greater<ll> ());

        ans.clear();

        for(int i=0;i<5;i++)
        {
            ans.push_back(arr[i]);
        }

        for(int i=n-1;i>max(4,n-6);i--)
        {
            ans.push_back(arr[i]);
        }

        ll res = pow(-3000,5)-1LL;
        //cout<<res<<" ";
        //cout<<res<<" ";
        n = ans.size();
        //cout<<n<<" ";
        for(int i=0;i<n-4;i++)
        {
            for(int j = i+1;j<n-3;j++)
            {
                for(int k=j+1;k<n-2;k++)
                {
                    for(int l=k+1;l<n-1;l++)
                    {
                        for(int m=l+1;m<n;m++)
                        {
                            ll temp = ans[i]*ans[j]*ans[k]*ans[l]*ans[m];
                            res = max(res, temp);
                        }
                    }

                }
            }
        }

        cout<<res<<endl;

    }


    return 0;
}