#include <bits/stdc++.h>
#define ll long long
#define ar array
using namespace std;

const int mxN = 1e5;
int n, m;
vector<pair<ll, ll>> adj1[mxN], adj2[mxN];
ll d1[mxN], d2[mxN];

void solve(int x, vector<pair<ll, ll>> adj[mxN], ll d[mxN])
{
	memset(d, 0x3f, sizeof(d1));
	d[x] = 0;
	priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
	pq.push({0, x});
	while (pq.size())
	{
		pair<ll, ll> p = pq.top();
		pq.pop();
		if (p.first > d[p.second])
			continue;
		for (pair<ll, ll> v : adj[p.second])
		{
			if (d[v.second] > p.first + v.first)
			{
				d[v.second] = p.first + v.first;
				pq.push({d[v.second], v.second});
			}
		}
	}
}
int main()
{
	cin >> n >> m;
	for (int i = 0; i < m; ++i)
	{
		ll a, b, c;
		cin >> a >> b >> c, --a, --b;
		adj1[a].push_back({c, b});
		adj2[b].push_back({c, a});
	}

	solve(0, adj1, d1);
	solve(n - 1, adj2, d2);
	ll ans = 1e18;
	for (int i = 0; i < n; ++i)
		for (pair<ll, ll> j : adj1[i])
			ans = min(ans, d1[i] + d2[j.second] + j.first / 2);
	cout << ans;
}
