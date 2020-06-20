// https://codeforces.com/problemset/problem/32/B

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

    string s;

    cin>>s;
    int i =0 ;
    for(;i<s.size()-1;i++)
    {
        if(s[i]=='.')
        {
            cout<<0;
        }
        else if(s[i]=='-')
        {
            i++;
            if(s[i]=='-')
            {
                cout<<2;
            }
            else {
                cout<<1;
            }
        }
    }

    if(i==s.size()-1 and s[i] == '.')
    cout<<0;



    return 0;
}