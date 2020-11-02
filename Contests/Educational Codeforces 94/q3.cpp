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

        int x;  
        cin>>x;

        int n = s.size();

        string w;

        rep(i, n)   w.push_back('1');

        for(int i=0; i<n;i++)
        {
            if(s[i]=='0')
            {
                if(i-x>=0)
                {
                    w[i-x] = '0';
                }

                if(i+x<n)
                {
                    w[i+x] = '0';
                }
            }
        }

        string a;
        rep(i, n)   a.push_back('2');
        //bool flag = true;
        for(int i=0;i<n;i++)
        {
            if(i>=x and w[i-x]=='1')
            {
                a[i] = '1';
            }
            else if(i+x < n and w[i+x]=='1')
            {
                a[i] = '1';
            }
            else {

                //else{
                    a[i] = '0';
                //}
                
            }
        }

        if(a == s)
        {
            cout<<w<<endl;
        }
        else {
            cout<<-1<<endl;
        }

        

    }

    return 0;
}