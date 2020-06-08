#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

set<int> articulationPoints;
vector<int> adjList[10001];
vector<int> vis(10001, 0);
int lo[10001], in[10001];


int timer = 1;

void dfs(int node, int parent)
{
    int cnt = 0;
    vis[node] = 1;
    lo[node] = in[node] = timer;
    timer++;

    for(auto curr: adjList[node])
    {
        if(curr==parent)    continue;

        if(vis[curr]==1)
        {
            lo[node] = min(lo[node], in[curr]);
        }
        else {
            dfs(curr, node);
            lo[node] = min(lo[node], lo[curr]);

            if(lo[curr]>=in[node] && parent != -1)
            {
                
                articulationPoints.insert(node);
            }
            cnt++;
        }
    }

    if(parent==-1&&cnt>1)
    {
        articulationPoints.insert(node);
    }

}

int main() {
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);

   

    while(1)
    {
        int n, m;
        cin>>n>>m;

        if(n==0 && m==0)
        {
            return 0;
        }
        for(int i=1;i<=n;i++)
        {
            adjList[i].clear();
            vis[i] = 0;
            lo[i] = in[i] = 0;
            articulationPoints.clear();
        }
        timer = 1;

        for(int i=0;i<m;i++)
        {
            int a, b;
            cin>>a>>b;

            adjList[a].push_back(b);
            adjList[b].push_back(a);
        }

        for(int i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
                dfs(i, -1);
            }
        }

        cout<<articulationPoints.size()<<endl;
    }


  return 0;
}