// https://codeforces.com/problemset/problem/69/A


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
    fio;
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    int xtot= 0, ytot =0 , ztot = 0;

    while(n--)
    {
        int x, y, z;
        cin>>x>>y>>z;

        xtot+=x;
        ytot+=y;
        ztot+=z;
    }

    if(!xtot && !ytot && !ztot)
    {
        cout<<"YES"<<endl;
    }
    else {

        cout<<"NO";
    }

    return 0;
}