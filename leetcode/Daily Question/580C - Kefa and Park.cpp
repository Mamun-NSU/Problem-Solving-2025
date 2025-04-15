// Link: https://codeforces.com/problemset/problem/580/C

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> tree;
vector<int> cats;
int m, answer = 0;

void dfs(int node, int parent, int consecutive)
{
    if (cats[node])
        consecutive++;
    else
        consecutive = 0;

    if (consecutive > m)
        return;

    bool isLeaf = true;
    for (int child : tree[node])
    {
        if (child != parent)
        {
            isLeaf = false;
            dfs(child, node, consecutive);
        }
    }

    if (isLeaf)
        answer++;
}

int main()
{
    int n;
    cin >> n >> m;
    cats.resize(n + 1);
    tree.resize(n + 1);

    for (int i = 1; i <= n; ++i)
        cin >> cats[i];

    for (int i = 0; i < n - 1; ++i)
    {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    dfs(1, 0, 0);
    cout << answer << endl;
    return 0;
}
