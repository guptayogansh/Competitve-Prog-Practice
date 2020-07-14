#include <bits/stdc++.h>
using namespace std;

const int mxN = 1e5;
vector<int> adj[mxN];
bool v[mxN] = {0};
int l[mxN];
int n, m, a, b;

vector<int> ans;

int main()
{
	cin >> n >> m;
	while (m--)
	{
		cin >> a >> b, --a, --b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	memset(l, -1, sizeof(l));
	queue<int> q;
	q.push(0);

	while (!q.empty())
	{
		int p = q.front();
		q.pop();

		for (auto nd : adj[p])
		{
			if (l[nd] < 0)
			{
				l[nd] = p;
				q.push(nd);
			}
		}
	}
	if (l[n - 1] < 0)
	{
		cout << "IMPOSSIBLE";
	}
	else
	{
		int u = n - 1;
		while (u^0)
		{
			ans.push_back(u);
			u = l[u];
		}
		ans.push_back(0);
		reverse(ans.begin(), ans.end());
		cout << ans.size() << "\n";
		for (auto it : ans)
			cout << it + 1 << " ";
	}
}
