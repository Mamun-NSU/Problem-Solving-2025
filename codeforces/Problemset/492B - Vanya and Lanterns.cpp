// Link: https://codeforces.com/problemset/problem/492/B

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    double max_gap = 0.0;

    // Find the maximum gap between consecutive lanterns
    for (int i = 1; i < n; i++)
    {
        max_gap = max(max_gap, (double)(a[i] - a[i - 1]));
    }

    // Consider the distance from the first lantern to 0 and from the last lantern to l
    double max_edge_gap = max((double)a[0], (double)(l - a[n - 1]));

    // The required radius is the maximum of half the largest gap or the max edge distance
    double d = max(max_gap / 2.0, max_edge_gap);

    cout << fixed << setprecision(10) << d << endl;

    return 0;
}
