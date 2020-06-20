// https://codeforces.com/problemset/problem/266/A

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

    string s;

    cin>>s;
    int count = 0;
    rep(i, n-1)
    {
        int j = i;
        while(s[i]==s[j+1])
        {
            count++;
            //s.erase(s.begin() + i + 1);
            j++;
        }

        i=j;
    }

    cout<<count;



    return 0;
}