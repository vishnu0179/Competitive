// https://codeforces.com/problemset/problem/263/A


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

    int posx, posy;

    for(int i=1;i<=5;i++)
    {
        for(int j=1; j<=5; j++)
        {
            int temp;
            cin>>temp;
            if(temp)
            {
                posx = i;
                posy = j;
            }
        }
    }

    cout<<abs(posx-3) + abs(posy-3);

    return 0;
}