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
        int n;
        cin>>n;

        int preva = 0, prevb= 0;


        vector<int> a(n);
        vector<int> b(n);

        rep(i , n)
        {
            cin>>a[i];
        }

        bool flag1 = false;
        bool flag2 = false;
        rep(i , n)
        {
            cin>>b[i];
            if(b[i]==0)
            {
                flag1 = true;
            }
            else {
                flag2 = true;
            }
        }



        

        int flag = 1;

        rep(i,n-1)
        {
            if(a[i]>a[i+1])
            {
                flag = 0;
                break;
            }
        }

        if(flag || (flag1 && flag2))
        {
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }

    return 0;
}