// Link: https://codeforces.com/problemset/problem/433/B

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin >> n;

    vector<ll> v(n), original_prefix(n + 1, 0), sorted_prefix(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // Compute prefix sums for the original array
    for (int i = 1; i <= n; i++)
    {
        original_prefix[i] = original_prefix[i - 1] + v[i - 1];
    }

    // Sort the array and compute prefix sums for the sorted array
    vector<ll> sorted_v = v;
    sort(sorted_v.begin(), sorted_v.end());

    for (int i = 1; i <= n; i++)
    {
        sorted_prefix[i] = sorted_prefix[i - 1] + sorted_v[i - 1];
    }

    int m;
    cin >> m;

    while (m--)
    {
        int type, l, r;
        cin >> type >> l >> r;

        if (type == 1)
        {
            cout << original_prefix[r] - original_prefix[l - 1] << "\n";
        }
        else
        {
            cout << sorted_prefix[r] - sorted_prefix[l - 1] << "\n";
        }
    }

    return 0;
}
