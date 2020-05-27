#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<vector<int>> adjList(100001);
vector<int> vis(100001, 0);

void addEdge(int u, int v)
{
    adjList[u].push_back(v);
    adjList[v].push_back(u);
}

void dfs(int node)
{
    vis[node] = 1;

    for(int i: adjList[node])
    {
        if(!vis[i])
        {
            dfs(i);
        }
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m;
    cin >> n >> m;
    int temp = m;
    while (m--)
    {
        int u,v;
        cin>>u>>v;
        addEdge(u,v);
    }

    dfs(1);

    int flag = 0;

    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            flag = 1;
            break;
        }
    }

    if(flag==0 && temp == n-1)
    {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }

    return 0;
}