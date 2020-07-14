#include <bits/stdc++.h>
using namespace std;

int n, m, a, b;

const int mxN = 1e5;
int p[mxN];
vector<int> adj[mxN];
bool v[mxN] = {0};

void dfs(int n, int pn = -1)
{
	p[n] = pn;
	v[n] = 1;
	for (auto nd : adj[n])
	{
		if (nd == pn)
			continue;
		if (v[nd])
		{
			vector<int> ans = {n};
			while (n ^ nd)
			{
				n = p[n];
				ans.push_back(n);
			}
			ans.push_back(ans[0]);
			cout << ans.size() << "\n";
			for (auto i : ans)
				cout << i + 1 << " ";
			exit(0);
		}
		else
			dfs(nd, n);
	}
}
int main()
{

	cin >> n >> m;
	while (m--)
	{
		cin >> a >> b, --a, --b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	for (int i = 0; i < n; i++)
		if (!v[i])
			dfs(i);

	cout << "IMPOSSIBLE";
}
