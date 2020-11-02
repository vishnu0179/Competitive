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

int solve(string s, int start,  char c, int count)
{

    if(count == 1)
    {
        if(s[start] == c)
            return 0;
        else 
            return 1;
    }

    

    int counta = 0;


    //cout<<start<<end;

    for(int i=0;i<count/2;i++)
    {
        if(s[start + i]!=c)
            counta++;
    }

    int countb = 0;

    for(int i=count/2;i<count;i++)
    {
        if(s[start + i]!=c)
            countb++;
    }

    int ans1 = 0;
    int ans2 = 0;
    
    if(counta > countb)
    {
        return countb + solve(s, start, c+1, count/2);  
    }
    else if( counta == countb)
    {
        return min(countb + solve(s, start, c+1, count/2), counta + solve(s, start + count/2, c+1, count/2));
    }
    else {
        return counta + solve(s, start + count/2, c+1, count/2);
    }

    
}

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

        int n;
        cin>>n;

        string s;
        cin>>s;

        //s = "$" + s;

        cout<<solve(s, 0, 'a', n)<<endl;


    }

    return 0;
}