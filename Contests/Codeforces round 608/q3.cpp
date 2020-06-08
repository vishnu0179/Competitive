// https://codeforces.com/contest/1271/problem/C

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
    // fio;
    // #ifndef ONLINE_JUDGE
    //   freopen("input.txt", "r", stdin);
    //   freopen("output.txt", "w", stdout);
    // #endif

    int n, sx, sy;
    cin>>n>>sx>>sy;

    int countup = 0, countdown = 0, countleft = 0, countright = 0;

    int maxcount = 0;

    char pos = 'a';

    for(int i=0;i<n;i++)
    {
        int x, y;
        cin>>x>>y;
        if(y<sy)
        {
            countleft++;
            if(maxcount < countleft)
            {
                maxcount = countleft;
                pos = 'l';
            }
        }
        if(y>sy)
        {
            countright++;
            if(maxcount < countright)
            {
                maxcount = countright;
                pos = 'r';
            }
        }
        if(x>sx)
        {
            countdown++;
            if(maxcount < countdown)
            {
                maxcount = countdown;
                pos = 'd';
            }
        }
        if(x<sx)
        {
            countup++;
            if(maxcount < countup)
            {
                maxcount = countup;
                pos = 'u';
            }
        }
    } 

    cout<<maxcount<<endl;
    switch (pos)
    {
    case 'l': 
        cout<<sx<<" "<<sy - 1;
        break;
    case 'u' : cout<<sx - 1<<" "<<sy;
        break;
    case 'd': cout<<sx+1<<" "<<sy;
        break;
    case 'r': cout<<sx<<" "<<sy + 1;
    default:
        break;
    }





    return 0;
}