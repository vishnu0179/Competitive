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

int partition(vi &arr, int start, int end)
{
    int pivot = arr[end];

    int j =  start;

    for(int i=start;i<=end-1;i++)
    {
        if(arr[i]<pivot)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    swap(arr[j], arr[end] );

    return j;

}

void quickSort(vi &arr, int start, int end)
{
    if(start<end)
    {
        int pi = partition(arr, start, end);

        quickSort(arr, start, pi - 1);
        quickSort(arr, pi + 1, end);
    }
}

int main() {
    fio;
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    vi arr(n);
    for(int i=0;i<arr.size();i++)
    {
      cin>>arr[i];
    }

    quickSort(arr, 0 , n-1);

    rep(i,n)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}