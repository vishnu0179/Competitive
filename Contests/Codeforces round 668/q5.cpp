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

    int n;
    cin>>n;

    vi arr(n);

    rep(i, n)   cin>>arr[i];

    sort(arr.begin(), arr.end(), greater<int>());

    int x;
    cin>>x;

    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }

    int s = 0;
    int e = arr[0];



    while(s < e)
    {
        int mid = (s + e)/2;

        int curr_sum = 0;
        //cout<<mid;
        for(int i=0;i<n;i++)
        {
            if(arr[i] > mid)
            {
                curr_sum = curr_sum + (arr[i] - mid);
            }
        }

        if(curr_sum > x)
        {
            s = mid+1;
        }
        else {
            e = mid;
        }
    }

    cout<<s;


    return 0;
}