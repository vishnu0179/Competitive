#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<vector<int>> dp(10001, vector<int>(10001, 0));

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	string a, b;
	cin >> a >> b;

	int m = a.size();
	int n = b.size();

	for (int i = 1; i <= a.size(); i++)
	{
		for (int j = 1; j <= b.size(); j++)
		{
			if (a[i - 1] == b[j - 1])
			{
				dp[i][j] = 1 + dp[i - 1][j - 1];
			}
			else
			{
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}

	//cout<<m<<n;
	//cout<<a<<b;

	cout << dp[m][n];

	return 0;
}