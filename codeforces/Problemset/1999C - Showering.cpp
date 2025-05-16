// Link: https://codeforces.com/problemset/problem/1999/C

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long s, m;
        cin >> n >> s >> m;
        vector<pair<long long, long long>> intervals(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> intervals[i].first >> intervals[i].second;
        }

        bool canShower = false;

        // Check time before first interval
        if (intervals[0].first >= s)
            canShower = true;

        // Check gaps between intervals
        for (int i = 1; i < n; ++i)
        {
            if (intervals[i].first - intervals[i - 1].second >= s)
            {
                canShower = true;
                break;
            }
        }

        // Check time after last interval
        if (m - intervals[n - 1].second >= s)
            canShower = true;

        cout << (canShower ? "YES" : "NO") << '\n';
    }
    return 0;
}
