#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int> adjList[1000001];
vector<int> vis(1000001);
int cc[1000001];

void bfs(int src, int i)
{
    vis[src] = 1;
    queue<int> q;
    q.push(src);
    cc[src] = i;

    while(!q.empty())
    {
        int curr = q.front();
        q.pop();
        for(int child: adjList[curr])
        {
            if(vis[child]==0)
            {
                vis[child] = 1;
                q.push(child);
                cc[child] = i;
            }
        }
    }
}

int main() {
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);

    int t, n, k, a, b;
    cin>>t;
    string op;
    while(t--)
    {
        cin>>n>>k;
        vector<pair<int,int>> unequalList;
        unequalList.clear();
        for(int i=1;i <= n; i++)
        {
            adjList[i].clear();
            vis[i] = 0;
            cc[i] = 0;
        }

        for(int i=1;i<=k;i++)
        {
            cin>>a>>op>>b;

            if(op=="=")
            {
                adjList[a].push_back(b);
                adjList[b].push_back(a);
            }
            else
            {
                unequalList.push_back({a, b});
            }
            
        }

        for(int i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
                bfs(i,i);
            }
        }

        bool flag = true;

        for(int i=0;i<unequalList.size();i++)
        {
            a = unequalList[i].first;
            b = unequalList[i].second;

            if(cc[a] == cc[b])
            {
                flag = false;
                break;
            }
        }

        if(flag)
            cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
  

  return 0;
}