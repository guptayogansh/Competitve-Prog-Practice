#include <bits/stdc++.h>
using namespace std;

const int mxN = 1e5, M = 1e9 + 7;
int n, m;
vector<int> adj[mxN];
bool vis[mxN], act[mxN];
int dp[mxN],p[mxN];

void dfs(int u)
{

    dp[u] = u == n - 1 ? 1 : 0;
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
        	if(!vis[nd]){
            p[nd] = u;
            dfs(nd);
        }
        }

        dp[u] = (dp[nd] + dp[u]) % M;
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

    cout << dp[0];
}
