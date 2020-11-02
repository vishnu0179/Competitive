// https://codeforces.com/problemset/problem/186/A

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

    string a, b;
    cin>>a>>b;

    int diff = 0;

    if(a.size()!=b.size())
    {
        cout<<"NO"<<endl;
        return 0;
    }
    int pos1 = -1, pos2 = -1;
    for(int i= 0 ; i<a.size();i++)
    {
        if(a[i]!=b[i] and pos2 == -1 and pos1!=-1)
        {
            pos2 = i;
            break;
        }
        if(a[i]!=b[i] and pos1 == -1)
        {
            pos1 = i;
        }

        
    }
    if(pos1!=-1 or pos2!=-1)
        swap(a[pos1], a[pos2]);
    

    if(a==b)
    {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }

    return 0;
}