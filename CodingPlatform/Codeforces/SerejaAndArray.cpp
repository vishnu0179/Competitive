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

    int n, m;
    cin>>n>>m;

    vi arr(n);

    for(int i=0;i<arr.size();i++)
    {
      cin>>arr[i];
    }
    ll sum = 0;
    while(m--)
    {
        int type, v, q, x, y;

        cin>>type;

        switch (type)
        {
        case 1: cin>>v>>x;
                arr[v-1] = x - sum;
            /* code */
            break;
        case 2: cin>>y;
                sum+=y;
                break;
        case 3: cin>>q;
                cout<<arr[q-1]+sum<<endl;
                break;
        default:
            break;
        }
    }

    return 0;
}