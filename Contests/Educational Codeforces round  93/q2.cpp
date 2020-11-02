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

        vector<int> arr;
        arr.clear();
        int n = s.size();
        
        for(int i=0;i<s.size();)
        {
            int count = 0;
            while(i<n and s[i]=='0')
            {
                i++;
            }
            while(i<n and s[i] == '1')
            {
                count++;
                i++;
            }

            arr.push_back(count);
            
        }

        sort(arr.begin(), arr.end(), greater<int>());

        int sum = 0;
        for(int i=0;i<arr.size();i+=2)
        {
            sum += arr[i];
        }

        cout<<sum<<endl;

    }

    return 0;
}