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
      //Bob
    while(t--)
    {bool flag = 0;
        string s;
        cin>>s;

        int countZero = 0;

        for(char a: s)
        {
            if(a=='0')
                countZero++;
        }

        int countOne = s.size() - countZero;

        int temp = min(countZero, countOne);

        if(temp%2)
        {
            cout<<"DA"<<endl;
        }
        else {
            cout<<"NET"<<endl;
        }


    }

    return 0;
}