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
        int n,k;
        cin>>n>>k;

        vvi arr(n, vi(n,0));

        int pos = 0;

        

        while(k>0)
        {
            for(int i=0;i+pos<n and k>0;i++)
            {
                arr[i][i+pos] = 1;
                k--;
            }
            
            int r = n-1;
            if(pos!=0)
            for(int j=pos-1;j>=0 and k>0;j--)
            {
                arr[r][j] = 1;
                r--;
                k--;
            }

            pos++;
        }
        int maxR = INT_MIN;
        int minR = INT_MAX;

        int maxC = INT_MIN;
        int minC = INT_MAX;
        rep(i,n)
        {   
            int rowSum = 0;
            rep(j,n)
            {
                rowSum += arr[i][j];
            }
            maxR = max(maxR, rowSum);
            minR = min(minR, rowSum);
        }

        rep(i,n)
        {   
            int colSum = 0;
            rep(j,n)
            {
                colSum += arr[j][i];
            }
            maxC = max(maxC, colSum);
            minC = min(minC, colSum);
        }

        cout<<pow((maxR - minR),2) + pow((maxC - minC),2)<<endl;

        rep(i,n)
        {
            rep(j,n)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
        }
    }

    return 0;
}