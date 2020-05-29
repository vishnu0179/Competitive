// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/sum-of-numbers-9/submissions/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--)
	{
        int n;
        cin>>n;
	    int arr[n];int p;
        
	    for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>p;
	    int flag = 1;
	    for(int mask = 1;mask<(1<<n);mask++)
	    {
	        int sum = 0;
	        for(int i=0;i<n;i++)
	        {
	            int f = 1<<i;
	            if(f&mask)
	            sum+=arr[i];
	        }
	        if(sum == p)
	        {
	            flag = 0;
	            cout<<"YES"<<endl;
	            break;
	        }
	    }
	    if(flag)
	    cout<<"NO"<<endl;
	}
	
	
	return 0;
}
