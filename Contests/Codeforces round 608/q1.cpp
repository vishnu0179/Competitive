// https://codeforces.com/contest/1271/problem/A

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

int main() {
    // fio;
    // #ifndef ONLINE_JUDGE
    //   freopen("input.txt", "r", stdin);
    //   freopen("output.txt", "w", stdout);
    // #endif

    int a, b, c, d, e, f;

    cin>>a>>b>>c>>d>>e>>f;

    int cost = 0;

    b = min(b, c);

    if(e>f)
    {
        cost += min(a,d) * e;
        //a = a - min(a,d);
        d = d - min(a, d);
        //cout<<d;
        cost += min(b,d) * f;
    }
    else if(f>e){

        cost += min(b, d) *f;
        //cout<<min(b, d);
        //b -= min(b,d);
        
        d = d - min(b,d);
        
        cost += min(a,d) * e;
    }
    else {
        if(a>b)
        {
            cost += min(a,d) * e;
            d = d - min(a, d);
            cost += min(b,d) * f;
        }
        else {
            cost += min(b,d) * f;
            d = d - min(b,d);
        
        cost += min(a,d) * e;
        }
    }

    cout<<cost;


    return 0;
}