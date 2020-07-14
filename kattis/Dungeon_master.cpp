#include <bits/stdc++.h>
using namespace std;

const int mxN = 1e3, di[4] = {1, 0, -1, 0}, dj[4] = {0, 1, 0, -1};
const char dc[4] = {'D', 'R', 'U', 'L'};
int level,n, m, si, sj, ti, tj, d[mxN][mxN];
string s[mxN], l[mxN];

bool e(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m && s[i][j] == '.';
}

int main()
{

    cin >> level>> n >> m;
    for(int k=0;k<level;k++){
    for (int i = 0; i < n; ++i)
    {
        cin >> s[i];
        for (int j = 0; j < m; ++j)
        {
            if (s[i][j] == 'S')
                si = i, sj = j;
            if (s[i][j] == 'E')
                ti = i, tj = j, s[i][j] = '.';
        }
        l[i] = string(m, 0);
    }
   }  
    queue<pair<int, int>> q;
    q.push({si, sj});
    while (q.size())
    {
        pair<int, int> p = q.front();
        q.pop();

        for (int k = 0; k < 4; ++k)
        {
            int ni = p.first + di[k], nj = p.second + dj[k];
            if (!e(ni, nj))
                continue;
            q.push({ni, nj});
            s[ni][nj] = '#';
            d[ni][nj] = k;
            l[ni][nj] = dc[k];
        }
    }
    int ct = 0;
    if (l[ti][tj])
    {
        string t;
        while (ti ^ si || tj ^ sj)
        {
            t += l[ti][tj];
            int dd = d[ti][tj] ^ 2;
            ti += di[dd];
            tj += dj[dd];
            ct++;
        }
        if (ct == 1)
            cout << "Escaped in 1 minute";
        else
            cout << "Escaped in" << ct << "minutes";
    }
    else
        cout << "Trapped!";
}
