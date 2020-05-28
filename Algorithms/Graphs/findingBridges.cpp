// find and print the bridges in the given graph

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int> adjList[1000];
vector<int> vis(1000);
vector<int> in(1000);
vector<int> low(1000);


int timer = 0;
void dfs(int node, int par)
{
    vis[node] = 1;
    in[node] = low[node] = timer;
    timer++;

    for(int child: adjList[node])
    {
        if(child==par)
        continue;

        if(vis[child]==1)
        {
            // Then it is a backedge
            low[node] = min(low[node], in[child]);

        }
        else {
            // It is a forward edge
            dfs(child, node);

            if(low[child]>in[node])
            cout<<node<<" - "<<child<<" is a bridge \n";

            low[node] = min(low[node], low[child]); 
        }
    }
}

int main() {
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);

    int n, m;
    cin>>n>>m;

    while(m--)
    {
        int u, v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    dfs(1, 0);
  

  return 0;
}