#include <bits/stdc++.h>
using namespace std;

//BFS + Backtracking inside a grid!!!!!
const int mxN = 1e3, di[4] = {1, 0, -1, 0}, dj[4] = {0, 1, 0, -1};
const char dc[4] = {'D', 'R', 'U', 'L'};
int n, m, si, sj, ti, tj, d[mxN][mxN];
string s[mxN], l[mxN];

bool e(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m && s[i][j] == '.';
}

int main()
{

    cin >> n >> m;

    for (int i = 0; i < n; ++i)
    {
        cin >> s[i];
        for (int j = 0; j < m; ++j)
        {
            if (s[i][j] == 'A')
                si = i, sj = j;
            if (s[i][j] == 'B')
                ti = i, tj = j, s[i][j] = '.';
        }
        l[i] = string(m, 0);
    }

    queue<pair<int, int>> q;
    q.push({si, sj});
    while (q.size())
    {
        pair<int, int> p = q.front();
        q.pop();

        s[p.first][p.second] = '#';

        for (int k = 0; k < 4; ++k)
        {
            int ni = p.first + di[k], nj = p.second + dj[k];
            if (!e(ni, nj))
                continue;
            q.push({ni, nj});
            d[ni][nj] = k;
            l[ni][nj] = dc[k];
        }
    }

    if (l[ti][tj])
    {
        cout << "YES\n";
        string t;
        while (ti ^ si || tj ^ sj) // which simply means ti!=si || tj!=sj
        {
            t += l[ti][tj];
            int dd = d[ti][tj] ^ 2;
            ti += di[dd];
            tj += dj[dd];
        }
        reverse(t.begin(), t.end());
        cout << t.size() << "\n";
        cout << t;
    }
    else
        cout << "NO";
}
