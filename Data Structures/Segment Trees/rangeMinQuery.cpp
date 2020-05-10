#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void buildTree(int *tree, int *arr, int index, int s, int e)
{
    if (s > e)
        return;

    if (s == e)
        tree[index] = s;

    int mid = (s + e) / 2;

    buildTree(tree, arr, 2 * index, s, mid);
    buildTree(tree, arr, 2 * index + 1, mid + 1, e);

    int left = tree[2 * index];
    int right = tree[2 * index + 1];

    tree[index] = min(left, right);
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

int main()
{

    freopen("input.txt", "r", stdin);
    //freopen("output.txt","w",stdout);

    int arr[] = {1, 3, 2, -2, 4, 5};
    int n = 6;

    int *tree = new int[4 * n + 1];

    buildTree(tree, arr, 1, 0, n - 1);

    int t;
    cin>>t;
    while(t--)
    {
        int qs, qe;
        cin>>qs>>qe;

        cout<<query(tree, 1, 0, n-1, qs, qe)<<endl;
    }

    return 0;
}