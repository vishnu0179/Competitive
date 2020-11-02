#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define rep(i, n) for (auto i = 0; i < n; i++)
#define all(x) x.begin(), x.end()
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0)

#define mod 1000000007

using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ll;
typedef vector<vi> vvi;

struct city
{
    int income;
    int pop;
    int index;
    float perc;
};

vi adjList[200001];
int vis[200001];
int nodeCount = 0;

void dfs(int node)
{
    vis[node] = 1;
    nodeCount++;

    for (auto child : adjList[node])
    {
        //cout<<vis[child];
        if (vis[child] == 0)
        {
            //cout<<"a"<<" "<<nodeCount;
            dfs(child);
        }
    }
}

void printdfs(int node)
{
    vis[node] = 1;
    cout << node << " ";
    for (auto child : adjList[node])
    {
        if (vis[child] == 0)
        {
            //cout<<child;
            printdfs(child);
        }
    }
}

int main()
{
    fio;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<city> a(n);
        vis[0] = -1;
        adjList[0].clear();
        rep(i, n)
        {
            cin >> a[i].income;
            a[i].index = i + 1;
            vis[i+1] = -1;
            adjList[i+1].clear();
        }

        rep(i, n)
        {
            cin >> a[i].pop;
            a[i].perc = (float)a[i].income / (float)a[i].pop;
        }

        sort(a.begin(), a.end(), [](city a1, city b) {
            return a1.perc > b.perc;
        });

        int k = 0;
        unordered_set<int> s;
        s.clear();
        s.insert(a[k].index);
        vis[a[k].index] = 0;
        while (k < n - 1 and a[k].perc == a[k + 1].perc)
        {
            s.insert(a[k + 1].index);
            vis[a[k + 1].index] = 0;
            k++;
        }

        rep(i, m)
        {
            int u, v;
            cin >> u >> v;
            if (s.find(u) != s.end() and s.find(v) != s.end())
            {
                adjList[u].pb(v);
                adjList[v].pb(u);
            }
        }

        int maxVal = INT_MIN;
        int maxNode = 1;
        for (auto node : s)
        {
            nodeCount = 0;
            if (vis[node] == 0)
            {
                dfs(node);
            }
            if (maxVal < nodeCount)
            {
                maxVal = nodeCount;
                maxNode = node;
            }
        }

        for (auto node : s)
        {
            vis[node] = 0;
        }
        cout << maxVal << endl;
        printdfs(maxNode);
        cout << endl;
    }

    return 0;
}