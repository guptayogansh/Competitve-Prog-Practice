#include <bits/stdc++.h>
using namespace std;

const int mxN = 1e5;
int n, m;
int p[mxN], dp[mxN];
vector<int> adj[mxN], ans;
bool vis[mxN], act[mxN];

void dfs(int u)
{
	cout<<u<<"\n";
	dp[u] = u == n - 1 ? 1 : -1e9;
	vis[u] = 1;
	act[u] = 1;
	for (auto nd : adj[u])
	{
		if (act[nd])
		{
			cout << "IMPOSSIBLE";
			exit(0);
		}
		else
		{
			if (!vis[nd])
			{
				p[nd] = u;
				dfs(nd);
			}
		}
		if (dp[nd] + 1 > dp[u])
			p[u] = nd, dp[u] = dp[nd] + 1;
	}
	act[u] = 0;
}

int main()
{
	cin >> n >> m;
	while (m--)
	{
		int a, b;
		cin >> a >> b, --a, --b;
		adj[a].push_back(b);
	}
	for (int i = 0; i < n; i++)
		if (!vis[i])
			dfs(i);

	if (dp[0] < 0)
		cout << "IMPOSSIBLE";
	else
	{
		ans.push_back(0);
		int u = 0;
		while (u ^ n - 1)
		{
			u = p[u];
			ans.push_back(u);
		}

		cout << ans.size() << "\n";
		for (int a : ans)
			cout << a + 1 << " ";
	}
}
