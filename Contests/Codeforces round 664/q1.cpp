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
        int a[4];
        cin>>a[0]>>a[1]>>a[2]>>a[3]; //r g b w

        int oddCount = 0;

        bool convertable = true;

        for(int i=0;i<4;i++)
        {
            if(a[i]%2==1)
                oddCount++;
            if(a[i]==0 and i!=3)
                convertable = false;
        }

        if(oddCount == 0 || oddCount == 1 || oddCount == 4)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else if(oddCount == 3)
        {
            if(!convertable)
            {
                cout<<"NO"<<endl;
            }
            else {
                cout<<"YES"<<endl;
            }
        }
        else {
            cout<<"NO"<<endl;
        }
            


    }

    return 0;
}