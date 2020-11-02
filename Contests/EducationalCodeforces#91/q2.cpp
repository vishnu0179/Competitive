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
        string s;

        cin>>s;

            int rcount = 0;
            int scount =0;
            int pcount = 0;
        for(auto ch: s)
        {
            switch (ch)
            {
            case 'R': pcount++;
                break;
            
            case 'S': rcount++;
                break;
            
            case 'P': scount++;
                break;
            
            default:
                break;
            }

            
        }
        int n = s.size();

            if(rcount > pcount)
            {
                if(rcount > scount)
                {
                    rep(i,n)
                    {
                        cout<<'R';
                    }
                }
                else {
                    rep(i,n)
                    {
                        cout<<'S';
                    }
                }   
            }
            else {
                if(pcount > scount)
                {
                    rep(i,n)
                    {
                        cout<<'P';
                    }
                }
                else {
                    rep(i,n)
                    {
                        cout<<'S';
                    }
                }
            }

            cout<<endl;
      
    }

    return 0;
}