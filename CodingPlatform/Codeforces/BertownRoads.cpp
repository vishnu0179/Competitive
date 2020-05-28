#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int> adjList[100001];
vector<int> vis(100001);
int in[100001], low[100001];

int timer = 0;
bool hasBridge = false;
vector<pair<int, int>> edgeList;

void dfs(int node, int par)
{
    vis[node] = 1;
    in[node] = low[node] = timer;
    timer++;

    for (int child : adjList[node])
    {
        if (child == par)
            continue;

        if (vis[child])
        {
            low[node] = min(low[node], in[child]);
            if (in[node] > in[child])
            {
                edgeList.push_back({node, child});
            }
        }
        else
        {
            dfs(child, node);

            if (low[child] > in[node])
            {
                hasBridge = true;
                return;
            }

            edgeList.push_back({node, child});
            low[node] = min(low[node], low[child]);
        }
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m;
    cin >> n >> m;

    while (m--)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    dfs(1, -1);

    if (hasBridge)
    {
        cout << 0;
    }
    else
    {

        for (auto a : edgeList)
        {
            cout << a.first << " " << a.second << endl;
        }
    }
    return 0;
}