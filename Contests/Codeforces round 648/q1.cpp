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

    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;

        vvi arr(n, vi(m,0));
        rep(i,n)
        {
            rep(j,m)
            {
               cin>>arr[i][j]; 
            }
        }

        vi r(n, 0);
        vi c(m, 0);
        int count = 0;
        rep(i,n)
        {
            rep(j, m)
            {
                if(arr[i][j]==1)
                {
                    break;
                }
                else {
                    bool flag = true;

                    for(int c=0;c<m;c++)
                    {
                        if(arr[i][c]==1)
                        {
                            flag = false;
                            break;
                        }
                    }

                    for(int r= 0;r<n;r++)
                    {
                        if(arr[r][j]==1)
                        {
                            flag = false;
                            break;
                        }
                    }

                    if(flag)
                    {   
                        count++;
                        arr[i][j] = 1;
                    } 
                    if(j==m-1)
                    {
                        break;
                    }  
                }
            }
        }

     

        if(count%2)
        {
            cout<<"Ashish"<<endl;
        }
        else {
            cout<<"Vivek"<<endl;
        }
    }

    
    return 0;
}