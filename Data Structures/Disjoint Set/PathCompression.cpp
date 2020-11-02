#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define rep(i,n) for(auto i=0;i<n;i++)
#define all(x) x.begin(),x.end()
#define fio ios_base::sync_with_stdio(false); cin.tie(0)

#define mod 1000000007

using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ll;
typedef vector<vi> vvi;

// Code not to be executed. Only for learning purpose.
vi parent;

int find(int a)
{
    vi arr;

    while(parent[a] > 0)
    {
        arr.pb(a);
        a = parent[a];
    }

    for(int i=0;i<arr.size();i++)
    {
        parent[arr[i]] = a;
    }

    return a;
}

int findRecursive(int a)
{
    if(parent[a] < 0)
    {
        return a;
    }
    else {
        int x  = findRecursive(parent[a]);
        parent[a] = x;
        return x;
    }
}

void Union(int a, int b)
{
    parent[a] += parent[b];
    parent[b] = a;
}

int main() {
    fio;
    #ifndef ONLINE_JUDGE
      freopen("../input.txt", "r", stdin);
      freopen("../output.txt", "w", stdout);
    #endif
    int a, b;
    cin>>a>>b;
    a = find(a);
    b = find(b);

    if(a!=b) Union(a,b);


    return 0;
}