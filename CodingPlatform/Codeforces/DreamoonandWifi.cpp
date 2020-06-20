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

int fact(int n) 
{ 
    int res = 1; 
    for (int i = 2; i <= n; i++) 
        res = res * i; 
    return res; 
} 

int nCr(int n, int r) 
{ 
    return fact(n) / (fact(r) * fact(n - r)); 
} 



int main() {
    fio;
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    string a;
    string b;

    cin>>a>>b;

    int suma = 0;
    for(auto x: a)
    {
        if(x=='+') suma++;
        if(x=='-') suma--;
    }

    int countQues = 0;
    int sumb = 0;

    for(auto x: b)
    {
        if(x=='?')  countQues++;
        if(x=='+') sumb++;
        if(x=='-') sumb--;
    }

    double denom = 1<<countQues;

    int reqd = suma - sumb;

    double ans = 0.0;


    if(countQues%2==abs(reqd)%2 and abs(reqd)<=countQues)
    {
        int temp = -countQues;
        int r = 0;
        while(temp != reqd)
        {
            temp+=2;
            r++;
        }

        int num  = nCr(countQues, r);

        ans = num/denom;
        cout << fixed << setprecision(12) << ans;
    }
    else {
        cout << fixed << setprecision(12) << ans;
    }


    return 0;
}