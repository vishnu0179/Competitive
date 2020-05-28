// https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/monk-and-the-islands/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int> adjList[10001];
int vis[10001];
int dist[10001];

void bfs(int node)
{
    queue<int> q;
    q.push(node);
    vis[node] = 1;
    dist[node] = 0;

    while(!q.empty())
    {
        int curr = q.front();
        q.pop();

        for(int child: adjList[curr])
        {
            if(vis[child]==0)
            {
                q.push(child);
                dist[child] = dist[curr] + 1;
                vis[child] = 1;
            }
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
        int n, m;
        cin>>n>>m;

        for(int i=1;i<=n;i++)
        {
            adjList[i].clear();
            vis[i] = 0;
            dist[i] = 0;
        }

        for(int i=0;i<m;i++)
        {
            int u, v;
            cin>>u>>v;
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }

        bfs(1);

        cout<<dist[n]<<endl;




    }
    return 0;
}