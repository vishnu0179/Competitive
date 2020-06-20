// https://www.spoj.com/problems/DQUERY/
// Mo's Algortihm and sqrt decomposition

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define rep(i,n) for(auto i=0;i<n;i++)
#define all(x) x.begin(),x.end()
#define fio ios_base::sync_with_stdio(false); cin.tie(0)

#define mod 1000000007
#define BLK 178
using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ll;
typedef vector<vi> vvi;

struct query {
    int l, r, i;
};

query Q[200001];
int ar[30001], ans[200001];
int freq[1000001];
int cnt = 0;

bool cmp(query a, query b)
{
    if(a.l/BLK == b.l/BLK)
        return a.r<b.r;

    return a.l/BLK < b.l/BLK;
}

void add(int pos)
{
    freq[ar[pos]]++;
    if(freq[ar[pos]]==1)
        cnt++;
}

void remove(int pos)
{
    freq[ar[pos]]--;
    if(freq[ar[pos]]==0)
    {
        cnt--;
    }
}

int main() {
    fio;
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    rep(i,n)
    {
        cin>>ar[i];
    }

    int q;
    cin>>q;

    rep(i, q)
    {
        cin>>Q[i].l>>Q[i].r;
        Q[i].i = i;
        Q[i].l--;
        Q[i].r--;
        
    }

    sort(Q, Q+q, cmp);

    int ml = 0, mr = -1;

    for(int i=0;i<q;i++)
    {
        int l = Q[i].l;
        int r = Q[i].r;

        while(ml > l)
        ml--, add(ml);

        while(mr < r)
        mr++, add(mr);

        while(ml < l)
         remove(ml), ml++;

        while(mr > r)
        remove(mr), mr--;

        ans[Q[i].i] = cnt;

    }

    rep(i,q)
    {
        cout<<ans[i]<<endl;
    }

    return 0;
}