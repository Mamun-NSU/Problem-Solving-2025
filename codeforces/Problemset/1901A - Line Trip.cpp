// Link: https://codeforces.com/problemset/problem/1901/A

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> stations(n);
    for (int i = 0; i < n; i++)
    {
        cin >> stations[i];
    }

    // Include the start (0) and destination (x)
    stations.push_back(0);
    stations.push_back(x);

    // Sort the stations
    sort(stations.begin(), stations.end());

    // Find the maximum distance between consecutive stations
    int maxGap = 0;
    for (int i = 1; i < stations.size(); i++)
    {
        maxGap = max(maxGap, stations[i] - stations[i - 1]);
    }

    cout << maxGap << endl;
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
