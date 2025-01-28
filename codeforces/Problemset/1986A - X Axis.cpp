// Link: https://codeforces.com/problemset/problem/1986/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

bool canContinueIndefinitely(const vector<int> &clocks)
{
    long long totalSum = accumulate(clocks.begin(), clocks.end(), 0LL);
    long long maxClock = *max_element(clocks.begin(), clocks.end());

    // Check if the largest clock can be reset in time given all other clocks
    return maxClock <= (totalSum - maxClock + 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> clocks(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> clocks[i];
        }

        if (canContinueIndefinitely(clocks))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
