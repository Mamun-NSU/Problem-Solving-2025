// Link: https://codeforces.com/problemset/problem/1927/A

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int left = n, right = -1;

    // Find leftmost and rightmost 'B'
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            left = min(left, i);
            right = max(right, i);
        }
    }

    // Minimum segment length needed to repaint all black cells to white
    cout << (right - left + 1) << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
