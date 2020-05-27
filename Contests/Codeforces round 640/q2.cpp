#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll helper1(vector<ll>& v, ll l, ll r, ll key) 
{ 
    
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        if(v[mid]==key)
        {
            return mid;
        }

        else if(v[mid]<key)
        {
            l = mid+1;

        }
        else {
            r=  mid-1;
        }
        return l;
    }
} 

ll helper(vector<ll>& v, ll l, ll r, ll key) 
{ 
    while (r - l > 1) { 
        ll m = l + (r - l) / 2; 
        if (v[m] >= key) 
            r = m; 
        else
            l = m; 
    } 
  
    return r; 
}
int lis( int arr[], int n ) 
{ 
	int lis[n]; 

	lis[0] = 1; 

	/* Compute optimized LIS values in bottom up manner */
	for (int i = 1; i < n; i++ ) 
	{ 
		lis[i] = 1; 
		for (int j = 0; j < i; j++ ) 
			if ( arr[i] > arr[j] && lis[i] < lis[j] + 1) 
				lis[i] = lis[j] + 1; 
	} 

	// Return maximum value in lis[] 
	return *max_element(lis, lis+n); 
}
int main() {
    ll t;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(ll &i : v)
            cin>>i;
        cout<<LISLength(v)<<endl;
    }
}