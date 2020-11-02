// https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/owl-fight/

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

vi parent(100001);

int find(int a)
{
    if(parent[a]<0)
    {
        return a;
    }

    return parent[a] = find(parent[a]);
}

void Union(int a, int b)
{
    if(abs(a) > abs(b))
    {
        parent[b] = a;
    }
    else {
        parent[a] = b;
    }
}

int main() {
    fio;
    #ifndef ONLINE_JUDGE
      freopen("../input.txt", "r", stdin);
      freopen("../output.txt", "w", stdout);
    #endif

    int n, m;
    cin>>n>>m;

    

    for(int i=1;i<=n;i++)
    {
        parent[i] = -1 * i;
    }


    while(m--)
    {
        int u, v;
        cin>>u>>v;

        u = find(u);
        v = find(v);

        if(u!=v)
        {
            Union(u,v);
        }
    }

    int q;
    cin>>q;

    while(q--)
    {
        int u, v;
        cin>>u>>v;

        int a = find(u);
        int b = find(v);

        if(a==b)
        {
            cout<<"TIE"<<endl;
        }
        else {
            int ans = abs(a)>abs(b)?u:v;
            cout<<ans<<endl;
        }
    }

    return 0;
}