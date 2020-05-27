// https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void createEdge(vector<vector<int>> &adjList, int u, int v)
{
    adjList[u].push_back(v);
    adjList[v].push_back(u);
}

void dfs(vector<vector<int>> &adjList, vector<int> &vis, int node)
{
    vis[node] = 1;

    for(int i: adjList[node])
    {
        if(vis[i]==0)
            dfs(adjList, vis, i);
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n, e;

    cin>>n>>e;

    vector<vector<int>> adjList(n+1);
    vector<int> vis(n+1,0);

    while(e--)
    {
        int u,v;
        cin>>u>>v;
        createEdge(adjList, u, v);
    }

    int count = 0;

    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            dfs(adjList, vis, i);
            count++;
        }
    }

    cout<<count;
    

    return 0;
}