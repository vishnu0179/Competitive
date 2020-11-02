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

int merge(int arr[], int temp[], int left, int mid, int right)
{
    int i = left;
    int j = mid;
    int k = left;

    int inv_count = 0;

    while(i<=mid-1 and j<=right)
    {
        if(arr[i]<=arr[j])
        {
            temp[k] = arr[i];
            k++;
            i++;
        }
        else {
            temp[k] = arr[j];
            k++;
            j++;
            inv_count += mid - i;
        }
    }

    while(i<=mid-1)
    {
        temp[k] = arr[i];
        k++;
        i++;
    }

    while(j<=right)
    {
        temp[k] = arr[j];
        k++;
        j++;
    }

    for(i=left; i<= right;i++)
    {
        arr[i] = temp[i];
    }

    return inv_count;
}

int mergeSort(int arr[], int temp[], int left, int right)
{
    int mid, inv_count = 0;
    if(left < right)
    {
        mid = (right+left)/2;
        inv_count += mergeSort(arr, temp, left, mid );
        inv_count += mergeSort(arr, temp, mid+1, right);

        inv_count += merge(arr, temp, left, mid +1, right);

    }
    return inv_count;
}

int main() {
    fio;
    #ifndef ONLINE_JUDGE
      freopen("../input.txt", "r", stdin);
      freopen("../output.txt", "w", stdout);
    #endif

    int n;
    int arr[n];

    cin>>n;

    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }

    int temp[n];

    cout<<mergeSort(arr, temp, 0,  n-1);

    return 0;
}