// https://www.spoj.com/problems/TOPOSORT/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int> adjList[10001];
vector<int> res;
int in[10001];

bool Kahn(int n)
{
	priority_queue<int, vector<int>, greater<int>> pq; // min heap

	for (int i = 1; i <= n; i++)
	{
		if (in[i] == 0)
		{
			pq.push(i);
		}
	}

	while (!pq.empty())
	{
		int curr = pq.top();
		pq.pop();
		res.push_back(curr);

		for (int child : adjList[curr])
		{
			in[child]--;
			if (in[child] == 0)
				pq.push(child);
		}
	}

	return res.size() == n;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= m; i++)
	{
		int a, b;
		cin >> a >> b;
		adjList[a].push_back(b);
		in[b]++;
	}

	if (!Kahn(n))
	{
		cout << "Sandro fails.";
	}
	else
	{
		for (int node : res)
		{
			cout << node << " ";
		}
	}

	return 0;
}