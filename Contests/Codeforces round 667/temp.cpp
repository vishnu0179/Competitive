#include <iostream>
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll sum(ll n)
{
    return (n * (n+1))/2;
}

ll binSearch(ll req, int n)
{
    int s = 1;
    int e = n;

    while(s < e)
    {
        ll mid = s + (e -s)/2;

        ll midSum = sum(mid);
        //cout<<mid;
		if(midSum == req)
		{
			s = mid;
		}
		else if(midSum < req)
        {
            s = mid+1;    
        }
        else {
            e = mid-1;
        }
    }

    return s-1;
}

int main() {
	// your code goes here

    #ifndef ONLINE_JUDGE
      freopen("../input.txt", "r", stdin);
      freopen("../output.txt", "w", stdout);
    #endif
	
	int t;
	cin>>t;

	cout<<binSearch(17, 10);

	while(t--)
	{
	    ll n;
	    cin>>n;
	    
	    ll totSum = sum(n);
	    
	    if(totSum % 2)
	    {
	        cout<<0<<endl;
	        continue;
	    }
	    
	    ll req = totSum / 2LL;
	    ll currSum = totSum;
	    ll j = n;
        while(currSum >= req)
	    {
	        currSum -= j;
	        j--;
	    }

        //cout<<j<<endl;
	    
	    ll sumj = sum(j);
	    ll rem = totSum - sumj;
	    
	    ll diff = rem - sumj;
	    
	    diff = diff/2;

	    ll ans = n - j;
	    cout<<ans<<endl;
	    
	}
	
	return 0;
}
