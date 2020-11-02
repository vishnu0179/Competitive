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

int main()
{

    fio;
    #ifndef ONLINE_JUDGE
      freopen("../input.txt", "r", stdin);
      freopen("../output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }

        int sum3 = 0;
        rep(i,n)    sum3+=a[i];


        unordered_set<long long> sum;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                sum.insert(a[i]+a[j]);
            }
        }


        unordered_map<int, int> mp1 = mp;
        int ans = 0;
        int m;
        for(auto s:sum)
        {
            int temp = 0;
            for(auto p:mp1)
            {
                if(mp1[p.first]==0)
                {
                    continue;
                } 
                if(mp1.find(s-p.first)!=mp1.end() && mp1[s-p.first]>0)
                {
                    if(p.first == s-p.first) 
                    {
                        temp+=mp1[p.first]/2;
                    }
                    else 
                    {
                        temp+=min(mp1[p.first], mp1[s-p.first]);
                    }
                    mp1[s-p.first] = 0;
                    mp1[p.first] = 0;
                }
            }
            if(ans<temp) 
            {
                m = s;
            }

            ans = max(temp, ans);
            mp1 = mp;
        }


        cout<<ans<<endl;
    }
        return 0;
    }