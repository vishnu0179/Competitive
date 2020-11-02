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

void buildTree(ll *tree, ll *arr, int index, int s, int e)
{
    if (s > e)
        return;

    if (s == e)
    {
        tree[index] = arr[s];
        return;
    }

    int mid = (s + e) / 2;

    buildTree(tree, arr, 2 * index, s, mid);
    buildTree(tree, arr, 2 * index + 1, mid + 1, e);

    ll left = tree[2 * index];
    ll right = tree[2 * index + 1];

    tree[index] = max(left, max(right, left + right));
}

ll rangeQuery(ll *tree, ll *arr, int index, int s, int e, int qs, int qe)
{
    if (s > qe or e < qs)
    {
        return INT_MIN;
    }

    if (s >= qs and e <= qe)
    {
        return tree[index];
    }

    int mid = (s + e) / 2;

    ll left = rangeQuery(tree, arr, 2 * index, s, mid, qs, qe);
    ll right = rangeQuery(tree, arr, 2 * index + 1, mid + 1, e, qs, qe);

    return max(left, max(right, left + right));
}

int main()
{
    fio;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    ll arr[n];

    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }

    int m;
    cin>>m;
    ll tree[4*n+3];

    buildTree(tree, arr, 1, 0, n-1);
    while(m--)
    {
        int u,v;
        cin>>u>>v;

        cout<<rangeQuery(tree, arr, 1, 0, n-1, u-1, v-1)<<endl;
    }

    return 0;
}