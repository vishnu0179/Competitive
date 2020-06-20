// https://codeforces.com/problemset/problem/289/B

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

    int n, m, d;

    int flag = 0;

    cin>>n>>m>>d;

    vi arr(n*m);
    

    for(int i=0;i<n*m;i++)
    {
        cin>>arr[i];
        int temp = arr[0]%d;
        if(temp!=arr[i]%d)
        {
            flag = 1;
        }
    }

    if(flag)
    {
        cout<<-1;
        return 0;
    }

    sort(arr.begin(), arr.end());

    int median = arr[n*m/2];

    int ans = 0;

    for(auto ele: arr)
    {
        ans+= abs(ele-median)/d;
    }

    cout<<ans;

    return 0;
}