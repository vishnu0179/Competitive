// 2. Given an array, find a increasing triplet such that its sum is maximum. 
//      i.e A[i] < A[j]< A[k]; i<j<k.

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

int getLowValue(set<int> s, int n)
{
    auto it = s.lower_bound(n);
    it--;

    return (*it);
}

int main() {
    fio;
    #ifndef ONLINE_JUDGE
      freopen("../input.txt", "r", stdin);
      freopen("../output.txt", "w", stdout);
    #endif
    

    int n;
    cin>>n;

    vi arr(n);
    for(int i=0;i<arr.size();i++)
    {
      cin>>arr[i];
    }

    int maxSuffArr[n+1];
    maxSuffArr[n] = INT_MIN;
    for(int i=n-1;i>=0;i--)
    {
        maxSuffArr[i] = max(arr[i], maxSuffArr[i+1]);
    }

    set<int> s;

    s.insert(arr[0]);
    int ans = 0;
    for(int i=1;i<n-1;i++)
    {
        if(maxSuffArr[i+1]>arr[i])
        {
            ans = max(ans, arr[i] + getLowValue(s, arr[i]) + maxSuffArr[i+1]); 
        }

        s.insert(arr[i]);
    }

    cout<<ans;


    

    return 0;
}