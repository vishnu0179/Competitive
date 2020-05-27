// https://www.codechef.com/problems/FIRESC

#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

typedef long long ll;

vector<int> arr[100001];
int vis[100001];

int cc_size;

void dfs(int node)
{
    vis[node] = 1;
    cc_size++;

    for(int i : arr[node])
    {
        if(vis[i]==0)
        {
            dfs(i);
        }
    }
}


int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        for(int i=1;i<=n;i++)
        {
            vis[i] = 0;
            arr[i].clear();
        }

        for(int i=0;i<m;i++)
        {
            int u,v;
            cin>>u>>v;

            arr[u].push_back(v);
            arr[v].push_back(u);
        }
        int count = 0;

        int res = 1;
        for(int i=1;i<=n;i++)
        {
            cc_size = 0;
            if(vis[i]==0)
            {
                dfs(i);
                count++;
                res  = (res * cc_size)%mod;
            }
        }

        cout<<count<<" "<<res<<endl;

    }

    return 0;
}