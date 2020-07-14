#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int mxN = 2.5e3;
int n, m, p[mxN];
vector<pair<ll, ll>> adj[mxN];
ll d[mxN];
bool vis[mxN];

int main()
{
	cin >> n >> m;
	while (m--)
	{
		ll a, b, c;
		cin >> a >> b >> c, --a, --b;
		adj[a].push_back({c, b});
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			for (auto a : adj[j])
			{
				if (d[j] + a.first < d[a.second])
				{

					d[a.second] = d[j] + a.first;
					p[a.second] = j;

					if (i == n - 1)
					{
						cout << "YES\n";
						while (!vis[j])
						{
							vis[j] = 1;
							j = p[j];
						}
						int u = j;
						vector<int> ans;
						ans.push_back(u);
						u = p[u];
						while (u ^ j)
						{
							ans.push_back(u);
							u = p[u];
						}
						ans.push_back(u);
						reverse(ans.begin(), ans.end());
						for (auto it : ans)
							cout << it + 1 << " ";
						return 0;
					}
				}
			}
	}
	cout << "NO";
}
