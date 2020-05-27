#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void addEdge(vector<vector<int>> &adjList, int u, int v)
{
    adjList[u].push_back(v);
    adjList[v].push_back(u);
}

void dfs(vector<vector<int>> &adjList, vector<int> &vis, vector<int> &dis, int node, int d)
{
    vis[node] = 1;
    dis[node] = d;

    for(int i: adjList[node])
    {
        if(vis[i]==0)
        {
            dfs(adjList, vis, dis, i, d+1);
        }
    }
}

int main() {
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);

    int n;
    cin>>n;

    vector<vector<int>> adjList(n+1);
    vector<int> vis(n+1,0);
    vector<int> dist(n+1,0);
    int u,v;
    for(int i=0;i<n-1;i++)
    {
        cin>>u>>v;
        addEdge(adjList, u, v);
    }

    dfs(adjList, vis, dist, 1, 0);

    int q;
    cin>>q;

    int ans = 2;
    int minDist = INT_MAX;
    while(q--)
    {
        int temp;
        cin>>temp;

        if(dist[temp]<minDist)
        {
            ans = temp;
            minDist = dist[temp];
        }
        else if(dist[temp]== minDist)
        {
            if(ans>temp)
            {
                ans = temp;
            }
        }

    }

    cout<<ans;
  
    

  return 0;
}