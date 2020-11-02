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
      freopen("../input.txt", "r", stdin);
      freopen("../output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    while(t--)
    {
        int ax, ay, az;
        cin>>ax>>ay>>az;

        int bx, by, bz;
        cin>>bx>>by>>bz;

        int ans = 0;
        int temp = min(az, by);

        ans  = ans + temp * 2;
        az = az - temp;
        by = by - temp;

        temp = min(az, bz);
        az -= temp;
        bz -= temp;

        temp = min(az, bx);
        az = az -temp;
        bx = bx - temp;

        temp = min(ay, by);
        ay -= temp;
        by -= temp;

        temp = min(ay, bx);
        ay -= temp;
        bx -= temp;

        temp = min(ax, bx);
        ax -= temp;
        bx -= temp;

        temp = min(ax, bz);
        ax -= temp;
        bz -= temp;

        temp = min(ax, by);
        ax -= temp;
        by -= temp;

        temp = min(ay, bz);

        ans -= temp*2;

        ay -= temp;
        bz -= temp;

        cout<<ans<<endl;
        
        
    
    }

    return 0;
}