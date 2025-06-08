// Link: https://codeforces.com/problemset/problem/115/A

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> p(n + 1);
    vector<int> depth(n + 1, 0); // memoization

    for (int i = 1; i <= n; ++i)
    {
        cin >> p[i];
    }

    int maxDepth = 0;
    for (int i = 1; i <= n; ++i)
    {
        int d = 0, j = i;
        while (j != -1)
        {
            if (depth[j])
            { // use memoized depth if available
                d += depth[j];
                break;
            }
            ++d;
            j = p[j];
        }
        depth[i] = d;
        maxDepth = max(maxDepth, d);
    }

    cout << maxDepth << endl;
    return 0;
}
