// https://codeforces.com/problemset/problem/433/A

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

    int sum = 0;
    int counth = 0;
    rep(i,n)
    {   
        int temp;
        cin>>temp;
        sum+=temp;
        if(temp==100)
        {
            counth++;
        }
    }

    if(counth%2 or sum % 200 !=0 )
    {
        //cout<<"a";
        cout<<"NO"<<endl;
    }
    else {

        int count2 = n - counth;
        int half = sum / 2;
        int temp = 0;
        while((temp+200)<=half and count2--)
        {
            temp+=200;
        }
        //cout<<half<<" "<<temp;
        if(temp==half)
        {
            cout<<"YES"<<endl;
        }
        else {

            if((temp - half)%100==0 and counth>1)
            {
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }

    }

   

    return 0;
}