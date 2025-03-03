// Link: https://codeforces.com/problemset/problem/368/B

#include <iostream>
#include <unordered_set>
using namespace std;

const int MAX_N = 100005;
int a[MAX_N], distinctCount[MAX_N];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    unordered_set<int> seen;

    // Compute distinct suffix counts
    for (int i = n; i >= 1; i--)
    {
        seen.insert(a[i]);
        distinctCount[i] = seen.size();
    }

    // Answer queries
    while (m--)
    {
        int l;
        cin >> l;
        cout << distinctCount[l] << '\n';
    }

    return 0;
}
