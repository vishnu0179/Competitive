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
        int n, k;
        cin>>n>>k;

        vi xpoints(n);
        vi ypoints(n);


        for(int i=0;i<n;i++)
        {
            cin>>xpoints[i];
        }

        sort(xpoints.begin(), xpoints.end());

        for(int i=0;i<n;i++)
        {
            cin>>ypoints[i];
        }

        int s = 0;
        int e = 0;
        int ans = 0;
        int gt1;
        int start = 0;
        int end = 0;
        while (e<n)
        {
            while(e<n and xpoints[s]+k>=xpoints[e])
            {
                e++;
            }
            if(ans < (e-s))
            {
                start = s;
                end = e;
                ans = e - s;
            }
            s++;
        }
        

        gt1 = ans;

        int ans1 = 0;
        s = 0;
        e = 0;
        
        while (e<start)
        {
            while(e<start and xpoints[s]+k>=xpoints[e])
            {
                e++;
            }
            ans1 = max(ans1, e-s);
            s++;
        }

        

        s = end;
        e = end;   

        while (e < n)
        {
            while(e<n and xpoints[s]+k>=xpoints[e])
            {
                e++;
            }
            //cout<<s<<" "<<e<<" : "<<xpoints[s]<<" "<<xpoints[e]<<endl;
            ans1 = max(ans1, e-s);
            s++;
        }

        //cout<<ans1<<" "<<s<<" "<<e<<endl;

        gt1 += ans1;

        s = 0;
        e = 0;
        ans = 0;

        while (e<n)
        {
            while(e<n and xpoints[s]+(2*k+1)>=xpoints[e])
            {
                e++;
            }
            if(ans < (e-s))
            {
                ans = e - s;
            }
            s++;
        }
        
        int gt2 = ans;
        
        
        cout<<max(gt1, gt2)<<endl;

    }

    return 0;
}