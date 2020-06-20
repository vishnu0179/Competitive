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
        vi arr(2*n);

        int odd = 0;
        vi oddArr;
        vi evenArr;

        oddArr.clear();
        evenArr.clear();

        for(int i=0;i<2*n;i++)
        {
            cin>>arr[i];

            if(arr[i]%2)
            {
                odd++;
                oddArr.push_back(i+1);
            }
            else {
                evenArr.push_back(i+1);
            }
        }

        int even = 2*n-odd;

        if(even%2 == 0)
        {
            if(even>odd)
            {
                for(int i= 0;i<evenArr.size()-2;i+=2)
                {
                    cout<<evenArr[i]<<" "<<evenArr[i+1]<<endl;
                }

                for(int i= 0;i<oddArr.size();i+=2)
                {
                    cout<<oddArr[i]<<" "<<oddArr[i+1]<<endl;
                }
            }
            else {

                for(int i= 0;i<evenArr.size();i+=2)
                {
                    cout<<evenArr[i]<<" "<<evenArr[i+1]<<endl;
                }

                for(int i= 0;i<oddArr.size() - 2;i+=2)
                {
                    cout<<oddArr[i]<<" "<<oddArr[i+1]<<endl;
                }

            }
        }
        else {

                for(int i= 0;i<evenArr.size()-1;i+=2)
                {
                    cout<<evenArr[i]<<" "<<evenArr[i+1]<<endl;
                }

                for(int i= 0;i<oddArr.size() - 1;i+=2)
                {
                    cout<<oddArr[i]<<" "<<oddArr[i+1]<<endl;
                }

        }
    }

    return 0;
}