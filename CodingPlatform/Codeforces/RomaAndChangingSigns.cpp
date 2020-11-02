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

    int n, k;
    cin>>n>>k;

    vi arr(n);

    for(int i=0;i<arr.size();i++)
    {
      cin>>arr[i];
    }

    sort(arr.begin(), arr.end());
    int i = 0;
    while(k>0 and arr[i] < 0)
    {
        arr[i]*=-1;
        k--;
        i++;
    }

    if(k>0 and k%2==1)
    {
        sort(arr.begin(), arr.end());
        arr[0]*=-1;
    }
    ll sum = 0;
    for(int i=0;i<n;i++)
    {   
        sum+=arr[i];
    }

    cout<<sum;



    return 0;
}