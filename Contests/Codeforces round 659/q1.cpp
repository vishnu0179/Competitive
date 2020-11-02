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

        vector<vector<char>> ans(n+1, vector<char>(51, 'a'));
        int last = arr[0];
        for(int i=0;i<n;i++)
        {
            int j = 0;
            for(;j<arr[i];j++)
            {
                ans[i+1][j] = ans[i][j];
            }
            for(;j<51;j++)
            {
                ans[i+1][j] = (ans[i][j]=='a')?'b':'a';
            }
        }

        for(auto a: ans)
        {
            for(auto c: a)
            {
                cout<<c;
            }
            cout<<endl;
        }
        //cout<<endl;
    }

    return 0;
}