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

        string s;
        cin>>s;

  


        bool ans = true;
        for(int i=0;i<k;i++)
        {
            char ch = s[i];
            for(int j=i+k;j<n;j+=k)
            {
                if(ch == s[j])
                {
                    continue;
                }
                else if(ch == '?')
                {
                    ch = s[j];
                }
                else if(ch != s[j] and s[j] == '?')
                {
                      
                }
                else if(ch != s[j])
                {
                      ans = false;
                    break; 
                }
            }

            if(!ans)
            {
                break;
            }
            else {
                s[i] = ch;
            }
        }

        int oneCount = 0;
        int zeroCount = 0;
        int qcount = 0;
        for(int i=0;i<k;i++)
        {
            if(s[i] == '1')
            {
                oneCount++;
            }
            else if(s[i] == '0')
            {
                zeroCount++;
            }
            else
            {
                qcount++;
            }
        }

        if(abs(oneCount - zeroCount) > qcount)
        {
            //cout<<qcount <<" "<<zeroCount;
            ans = false;
        }

        if(ans)
        {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }



    }

    return 0;
}