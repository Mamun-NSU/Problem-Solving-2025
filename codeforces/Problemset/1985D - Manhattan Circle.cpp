// Link: https://codeforces.com/problemset/problem/1985/D

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> grid(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> grid[i];
        }

        int min_sum = INT_MAX, max_sum = INT_MIN;
        int min_diff = INT_MAX, max_diff = INT_MIN;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (grid[i][j] == '#')
                {
                    int sum = i + j;
                    int diff = i - j;
                    min_sum = min(min_sum, sum);
                    max_sum = max(max_sum, sum);
                    min_diff = min(min_diff, diff);
                    max_diff = max(max_diff, diff);
                }
            }
        }

        int h = (min_sum + max_sum + min_diff + max_diff) / 4 + 1;
        int k = (min_sum + max_sum - min_diff - max_diff) / 4 + 1;

        cout << h << " " << k << endl;
    }
    return 0;
}
