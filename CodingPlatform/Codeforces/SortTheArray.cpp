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

    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int i=0;
    int flag = 0;

    int pos1 = -1;
    int pos2 = -1;
    while(i<n-1 && arr[i]<arr[i+1])
    {
        i++;
    }

    if(i==n-1) 
    {
        cout<<"yes"<<endl;
        cout<<"1 1"<<endl;
        return 0;
    }
    else {
        pos1 = i;
        while(i<n-1&&arr[i]>arr[i+1])
        {
            i++;
        }
        pos2 = i;
    }

    if(pos1 == -1 and pos2 == -1)
    {
        cout<<"yes"<<endl;
        cout<<"1 1";
    }
    else {
        reverse(arr.begin() + pos1, arr.begin()+ pos2+1);
        for(int j=0;j<n-1;j++)
        {
            //cout<<arr[j]<<" "<<arr[j+2];
            if(arr[j]>arr[j+1])
            {
                cout<<"no";
                return 0;
            }
        }

        cout<<"yes"<<endl;
        cout<<pos1+1<<" "<<pos2+1;
    }

    return 0;
}