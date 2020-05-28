// https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/social-networking-graph/submissions/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int> adjList[1000001];
int level[1000001];
int dist[1000001];
int vis[1000001];

void bfs(int src)
{
    vis[src] = 1;
    queue<int> q;
    q.push(src);
    dist[src] = 0;

    while(!q.empty())
    {
        int curr = q.front();
        q.pop();

        for(int child: adjList[curr])
        {
            if(vis[child] == 0)
            {
                q.push(child);
                vis[child] = 1;
                dist[child] = dist[curr] + 1;
                level[dist[child]]++;
            }
        }
    }
}

int main() {
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);

    int n, m, a, b, src, d;
    
    cin>>n>>m;

    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    int q;
    cin>>q;

    while(q--)
    {
        cin>>src>>d;
        for(int i=0;i<=n;i++)
        {
            level[i] = 0;
            vis[i] = 0;
            dist[i] = 0;
        }

        bfs(src);

        cout<<level[d]<<endl;
    }
  

  return 0;
}