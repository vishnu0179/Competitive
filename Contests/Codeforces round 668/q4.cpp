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

const int N = 1e5 + 5;
int diam;
int depth[N];

int dfs(vi adjList[], int n, int p)
{
    int len = 0;
    for(int y: adjList[n])
    {
        if(y!=p)
        {
            depth[y] = depth[n] + 1;
            int cur = 1 + dfs(adjList, y, n);
            diam = max(diam, cur + len);
            len = max(len , cur);
        }
    }

    return len;
}

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
        int n, a, b, da, db;
        cin>>n>>a>>b>>da>>db;

        
        vi adjList[n+1];
        for(int i = 1;i<n+1;i++)
        {
            adjList[i].clear();
        }

        for(int i=0;i<n-1;i++)
        {
            int u, v;
            cin>>u>>v;

            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }

        diam  = 0;
        depth[a] = 0;
        dfs(adjList, a, -1);

        if(depth[b] <= da or 2*da >= min(diam,db))
        {
            cout<<"Alice";
        }
        else
        {
            cout<<"Bob";
        }

        cout<<endl;
    }

    return 0;
}