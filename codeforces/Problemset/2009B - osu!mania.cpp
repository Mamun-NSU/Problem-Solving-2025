// Link: https://codeforces.com/problemset/problem/2009/B

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> result(n);

    for (int i = 0; i < n; ++i)
    {
        string row;
        cin >> row;
        for (int j = 0; j < 4; ++j)
        {
            if (row[j] == '#')
            {
                result[n - 1 - i] = j + 1; // Store in reverse order
                break;
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << result[i] << " ";
    }
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
