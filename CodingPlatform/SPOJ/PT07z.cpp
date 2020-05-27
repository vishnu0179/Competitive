// https://www.spoj.com/problems/PT07Z/

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;

vi adjList[10001];
vi vis(10001,0);

int maxD = 0;
int endNode = 1;


void dfs(int node, int dist)
{
    vis[node] = 1;
   if(dist>maxD)
   {
       maxD = dist;
       endNode = node;
   }

    for(int child: adjList[node])
    {
        if(vis[child]==0)
        {
            dfs(child, dist + 1);
        }
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin>>n;

    for(int i=0;i<n-1;i++)
    {
        int u, v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    dfs(1, maxD);
    maxD= 0;
    for(int i=0;i<=n;i++) vis[i]=0;
    dfs(endNode, 0);

    cout<<maxD;

    

     

    return 0;
}