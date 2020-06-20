// https://codeforces.com/problemset/problem/275/A

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

    vvi arr(3, vi(3,1));

    vvi input(3, vi(3));

    rep(i,3)
    {
        rep(j,3)
        {
            cin>>input[i][j];
        }
    }

    rep(i, 3)
    {
        rep(j, 3)
        {
            if(input[i][j]%2)
            {
                arr[i][j]^=1;
                if(i>0) arr[i-1][j]^=1;
                if(j>0) arr[i][j-1] ^=1;
                if(j<2) arr[i][j+1]^=1;
                if(i<2) arr[i+1][j]^=1;
            }
        }
    }

    rep(i,3){
        rep(j,3)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }



    return 0;
}