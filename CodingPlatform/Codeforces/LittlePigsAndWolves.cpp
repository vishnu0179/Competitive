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

bool checkWolf(vector<string> &arr, int i , int j)
{
    if(i>0 and arr[i-1][j]=='W')
    {
        arr[i-1][j] = '.';
        return true;
    } 
    if(i< arr.size()-1 and arr[i+1][j] == 'W')
    {
        arr[i+1][j] = '.';
        return true;
    } 
    if(j >0  and arr[i][j-1]=='W')
    {
        arr[i][j-1] = '.';
        return true;
    }
    if(j<arr[i].size()-1 and arr[i][j+1]=='W')
    {
        arr[i][j+1] = '.';
        return true;
    }

    return false;
}

int main() {
    fio;
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    int n, m;
    cin>>n>>m;

    vector<string> arr(n);

    rep(i,n)
    {
        cin>>arr[i];
    }

    int ans = 0;

    rep(i,n)
    {
        rep(j,m)
        {
            if(arr[i][j]=='P')
            {
                if(checkWolf(arr, i, j))
                {
                    ans++;
                }
            }
        }
    }

    cout<<ans;

    return 0;
}