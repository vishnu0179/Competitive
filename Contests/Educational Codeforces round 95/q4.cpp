#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define rep(i,n) for(auto i=0;i<n;i++)
#define aint(x) x.begin(),x.end()
#define fio ios_base::sync_with_stdio(false); cin.tie(0)

#define mod 1000000007

using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ll;
typedef vector<vi> vvi;

set<int> elements;
multiset<int> len;

int get()
{
    if(len.empty()) return 0;
    return *elements.rbegin() - *elements.begin() - *len.rbegin();
}

void add(int x)
{
    elements.insert(x);
    auto it = elements.find(x);

    int prev = -1; int nxt = -1;
    if(it!=elements.begin())
    {
        --it;
        len.insert(x - *it);
        prev = *it;
        it++;
    }
    it++;

    if(it!=elements.end())
    {
        len.insert(*it - x);
        nxt = *it;
    }

    if(prev != -1 and nxt != -1)
    {
        len.erase(len.find(nxt - prev));
    }

}

void rem(int x)
{
    auto it = elements.find(x);

    int prev = -1, nxt = -1;
    if(it != elements.begin())
    {
        --it;
        
        len.erase(len.find(x - *it));
        prev = *it;
        ++it;
    }
    ++it;
    if(it != elements.end())
    {
        len.erase(len.find(*it - x));
        nxt = *it;
    }

    elements.erase(x);
    if(prev != -1 and nxt != -1)
    {
        len.insert(nxt - prev);
    }
    
}



int main() {
    #ifndef ONLINE_JUDGE
      freopen("../input.txt", "r", stdin);
      freopen("../output.txt", "w", stdout);
    #endif

    int n, q;
    cin>>n>>q;

    vector<int> arr(n);
 


    int maxel = INT_MIN;
    int minel = INT_MAX;
    rep(i,n)
    {
        cin>>arr[i];
        add(arr[i]);
    }

    

    cout<<get()<<endl;


    for(int i=0;i<q;i++)
    {
        int ch, idx;
        cin>>ch>>idx;

        switch (ch)
        {
        case 0: rem(idx);
                cout<<get()<<endl;
                break;
        case 1: add(idx);
                cout<<get()<<endl;
            break;
        
        }
    }



    return 0;
}