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

    int n, m, sx, sy;
    cin>>n>>m>>sx>>sy;

    vector<vector<bool>> vis(n+1, vector<bool> (m+1, false));

    //vis[sx][sy] = true;
    int i;
    for(i=sy;i<=m;i++)
    {
        vis[sx][i] = true;
        cout<<sx<<" "<<i<<endl;
    }

    for(i=sy-1;i>0;i--)
    {
        vis[sx][i] = true;
        cout<<sx<<" "<<i<<endl;
    }

    bool flag = true;

    for(int i=1;i<=n;i++)
    {
        if(i==sx)
            continue;
        if(flag)
        {
            for(int j=1;j<=m;j++)   
            {
                if(vis[i][j]==false)
                {
                    cout<<i<<" "<<j<<endl;
                    vis[i][j] = true;
                }
            }
        }
        else {
            
            for(int j=m;j>0;j--)   
            {
                if(vis[i][j]==false)
                {
                    cout<<i<<" "<<j<<endl;
                    vis[i][j] = true;
                }
            }

        }
        flag = !flag;
        
    }

    return 0;
}