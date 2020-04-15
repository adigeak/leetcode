#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100005];
bool visited[100005] = {false};
int a = 0;
void dfs(int s)
{
    visited[s] = true;
    a++;
    for (int i = 0; i < adj[s].size(); ++i)
    {
        if (visited[adj[s][i]] == false)
            dfs(adj[s][i]);
    }
}
int main()
{
    int n, m, t, s;
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        cin >> t >> s;
        adj[t].push_back(s);
        adj[s].push_back(t);
    }
    int se;
    cin >> se;
    dfs(se);
    cout << (n - a);
    return 0;
}