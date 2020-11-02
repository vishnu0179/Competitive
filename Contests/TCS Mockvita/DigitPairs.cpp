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
    
    int n;
    cin>>n;

    vector<int> evenhash(10);
    vector<int> oddHash(10);
    vector<int> bitPairs(n);

    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;

        bitPairs[i] = min(temp % 10, min(temp/100, (temp/10)%10)) * 7;
        bitPairs[i] += max(temp % 10, max(temp/100, (temp/10)%10)) * 11;

        if(bitPairs[i]>99)
        {
            bitPairs[i] %=100;
        }

        if(i%2)
        evenhash[bitPairs[i]/10]++;
        else 
        oddHash[bitPairs[i]/10]++;
    }
    int ans = 0;
    for(int i=0;i<10;i++)
    {
        if(evenhash[i]>2 or oddHash[i] > 2)
        {
            ans += 2;
        }
        else if(evenhash[i]==2 and oddHash[i] == 2)
        {
            ans+=2;
        }
        else if(evenhash[i]==2 or oddHash[i] == 2)
        {
            ans++;
        }
    }

    cout<<ans;







    return 0;
}