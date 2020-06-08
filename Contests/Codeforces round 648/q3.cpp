// https://codeforces.com/contest/1365/problem/C

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

    vector<int> a(n+1);
    vector<int> b(n+1);

    for(int i=1;i<n+1;i++)
    {
        int temp;
        cin>>temp;
        a[temp] = i;
    }

    for(int i=1;i<n+1;i++)
    {
        int temp;
        cin>>temp;
        b[temp] = i;
    }

    vector<int> shift(n+1);

    for(int i=1;i<n+1;i++)
    {
        int temp = (b[i] - a[i] + n)%n;
        shift[temp]++;
    }

    int ans = INT_MIN;

    for(int i=0;i<n+1;i++)
    {
        ans = max(ans, shift[i]);
    }

    cout<<ans;

    return 0;
}