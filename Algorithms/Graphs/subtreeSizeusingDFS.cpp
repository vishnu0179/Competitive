// Calculate the size of a rooted Subtree using dfs in O(n)

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int> vis(10001,0);
vector<int> adjList[10001];
vector<int> subTreeSize(10001,0);

int dfs(int node)
{
    int curr_size = 1;
    vis[node] = 1;

    for(int child: adjList[node])
    {
        if(vis[child]==0)
        {
            curr_size += dfs(child);
        }
    }

    subTreeSize[node] = curr_size;
    return curr_size;


}

int main() {
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);

  int n; cin>>n;

  for(int i=1;i<n;i++)
  {
      int u, v;
      cin>>u>>v;
      adjList[u].push_back(v);
      adjList[v].push_back(u);
  }

  subTreeSize[1] = dfs(1); // Taking 1 as root node

    cout<<subTreeSize[1];

  return 0;
}