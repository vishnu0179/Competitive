#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void buildTree(int *tree, int *arr, int index, int s, int e)
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

    int left = tree[2 * index];
    int right = tree[2 * index + 1];

    tree[index] = min(left, right);
}

void updateNode(int *tree, int index, int s, int e, int i, int val)
{
    if(i<s||i>e)
        return;
    
    if(s==e)
    {
        tree[index] = val;
        return;
    }

    int mid = (s+e)/2;

    updateNode(tree, 2 * index, s, mid, i, val);
    updateNode(tree, 2 * index + 1, mid+1, e, i, val);

    tree[index] = min(tree[2*index], tree[2*index+1]);
}

int query(int *tree, int index, int s, int e, int qs, int qe)
{
    //No Overlap
    if (s > qe || e < qs)
        return INT_MAX;

    //complete overlap
    if (s >= qs && e <= qe)
        return tree[index];

    int mid = (s + e) / 2;

    int left = query(tree, 2 * index, s, mid, qs, qe);
    int right = query(tree, 2 * index + 1, mid + 1, e, qs, qe);

    return min(left, right);
}

void rangeUpdate(int *tree, int index, int s, int e, int rs, int re, int val)
{

    if(s>re||e<rs)
    {
        return;
    }

    if(s==e)
    {
        tree[index] += val;
        return;
    }

    int mid = (s+e)/2;

    rangeUpdate(tree, 2*index, s, mid, rs, re, val);
    rangeUpdate(tree, 2*index+1, mid+1, e, rs, re, val);

    tree[index] = min(tree[2*index], tree[2*index+1]);

}

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt","w",stdout);

    int arr[] = {1, 3, 2, -2, 4, 5};
    int n = 6;

    int *tree = new int[4 * n + 1];

    buildTree(tree, arr, 1, 0, n - 1);

    int t;
    cin >> t;
    while (t--)
    {
        int qs, qe;
        cin >> qs >> qe;

        cout << query(tree, 1, 0, n - 1, qs, qe) << endl;
    }

    updateNode(tree, 1, 0, n-1, 2 , -1);

    cout<<query(tree, 1, 0, n - 1, 1, 2)<<endl;

    rangeUpdate(tree, 1, 0, n-1, 2, 4, 3);

    cout<<query(tree, 1, 0, n-1, 1, 5)<<endl;

    return 0;
}