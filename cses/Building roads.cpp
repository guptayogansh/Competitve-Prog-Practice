#include <bits/stdc++.h>
using namespace std;

const int mxN = 1e5;
int n, m, a, b;
vector<int> adj[mxN], ans;
bool v[mxN] = {0};

void dfs(int n)
{
	if (v[n])
		return;
	v[n] = true;
	for (auto nd : adj[n])
		dfs(nd);
}

int main()
{

	cin >> n >> m;

	while (m--)
	{
		cin >> a >> b, a--, b--;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	for (int i = 0; i < n; i++)

		if (!v[i])
			ans.push_back(i), dfs(i);
	cout << ans.size() - 1 << "\n";
	for (int i = 1; i < ans.size(); i++)
		cout << ans[0] + 1 << " " << ans[i] + 1 << "\n";
}
