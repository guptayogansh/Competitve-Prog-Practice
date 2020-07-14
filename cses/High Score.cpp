#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, m;
const int mxN = 2.5e3;
vector<pair<ll, ll>> adj[mxN];
vector<int> adj2[mxN];
ll d[mxN];
bool vis[mxN], vis2[mxN];

void dfs(int n)
{
	if (vis[n])
		return;
	vis[n] = 1;
	for (auto nd : adj2[n])
		dfs(nd);
}

void dfs2(int n)
{
	if (vis2[n])
		return;
	vis2[n] = 1;
	for (auto nd : adj[n])
		dfs2(nd.second);
}

int main()
{
	cin >> n >> m;
	while (m--)
	{
		ll a, b, x;
		cin >> a >> b >> x, --a, --b;
		adj[a].push_back({x, b});
		adj2[b].push_back(a);
	}
	dfs(n - 1);
	dfs2(0);
	memset(d, 0xc0, sizeof(d));
	d[0] = 0;

	for (int i = 0; i < n; i++)
	{
		bool ch = 0;
		for (int j = 0; j < n; j++)
			for (auto a : adj[j])
			{
				if (d[j] + a.first > d[a.second])
				{
					if (vis[a.second] && vis2[a.second])
						ch = 1;
					d[a.second] = d[j] + a.first;
				}
			}

		if (i == n - 1 && ch)
		{
			cout << -1;
			return 0;
		}
	}
	cout << d[n - 1];
}
