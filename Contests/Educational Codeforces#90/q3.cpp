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

    int t;
    cin>>t;
    while(t--)
    {
        string s;

        cin>>s;

        int diff = 0;
        int n = s.size();

        int preSum[n];
        int curr[n+1];
        
        int prev = 0;
        int j =0 ;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='+')
                diff++;
            else {
                diff--;
            }
            
            if(prev>diff)
            {
                curr[j] = i+1;
                prev = diff;
                j++;
            }
        }

        if(prev == 0)
        {
            cout<<s.size()<<endl;
            continue;
        }

        ll sum = 0;
        for(int i = 0;i<j;i++)
        {
            //cout<<curr[i]<<" ";
            sum = sum + curr[i];
        }

        cout<<sum + s.size()<<endl;



        


    }

    return 0;
}