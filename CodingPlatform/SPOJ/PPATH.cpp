#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int> adjList[10001];
int vis[10001];
int dist[10001];
vector<int> primes;

bool isPrime(int n)
{
  int temp = sqrt(n);
  for(int i=2; i<=temp;i++)
  {
    if(n%i==0)
      return false;
  }

  return true;
}

bool isValid(int a, int b)
{
  int count = 0;

  while(a>0)
  {
    if(a%10!=b%10)
      count++;
    a/=10;
    b/=10;

    if(count>1)
    break;
  }

  if(count!=1)
    return false;
  
  return true;
  
}

void buildGraph(){
  
  for(int i=1000;i<=9999;i++)
  {
    if(isPrime(i))
      primes.push_back(i);
  }

  for(int i=0;i<primes.size();i++)
  {
    for(int j=i+1;j<primes.size();j++)
    {
      int a = primes[i];
      int b = primes[j];

      if(isValid(a, b))
      {
        adjList[primes[i]].push_back(b);
        adjList[primes[j]].push_back(a);
      }
    }
  }

  
}


void bfs(int src)
{
  vis[src] = 1;
  queue<int> q;
  q.push(src);
  //cout<<src<<" ";
  dist[src] = 0;
  vis[src] = 1;

  while (!q.empty())
  {
    int curr = q.front();
    //cout<<curr;
    q.pop();
    
    for(int child: adjList[curr])
    {
      if(vis[child]==0)
      {
        vis[child]= 1;
        dist[child] = dist[curr] + 1;  
        q.push(child);
      }
    }
  }
  
}

int main() {
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
buildGraph();
  int t;
  cin>>t;
  
  while(t--)
  {
    int src, dest;
    cin>>src>>dest;
    

    for(int i = 1000;i<=9999;i++)
    {
      vis[i] = 0;
      dist[i] = -1;

    }

    bfs(src);

    if(dist[dest]==-1)
    {
      cout<<"Impossible"<<endl;
      continue;
    }

    cout<<dist[dest]<<endl;

  }
  

  return 0;
}