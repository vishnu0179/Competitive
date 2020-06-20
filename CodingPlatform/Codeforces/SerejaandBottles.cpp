// https://codeforces.com/problemset/problem/315/A

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

    set<int> a;
    unordered_map<int, int> b;

    int n;
    cin>>n;

    int count = 0;

    for(int i=0;i<n;i++)
    {
        int tempa, tempb;
        cin>>tempa;
        a.insert(tempa);
        cin>>tempb;
        b[tempa] = tempb;
    }

    for(auto x: b)
    {
        if(x.first != x.second)
        {
            if(a.find(x.second)==a.end())
            {
                count++;
            }
        }
        else {
            count++;
        }
    }

    cout<<count;

    return 0;
}