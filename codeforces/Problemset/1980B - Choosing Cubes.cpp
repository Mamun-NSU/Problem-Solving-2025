// Link: https://codeforces.com/problemset/problem/1980/B?

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int t;
    cin >> t; // Number of test cases
    while (t--)
    {
        int n, f, k;
        cin >> n >> f >> k; // Number of cubes, favorite cube index, and number of removed cubes
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        // Dmitry's favorite cube's value
        int fav_value = a[f - 1];

        // Sort the array in non-increasing order
        vector<int> sorted_a = a;
        sort(sorted_a.rbegin(), sorted_a.rend());

        // Count the number of cubes with values strictly greater than the favorite cube
        int greater_count = 0;
        for (int i = 0; i < n; ++i)
        {
            if (sorted_a[i] > fav_value)
            {
                greater_count++;
            }
            else
            {
                break;
            }
        }

        // Count the number of cubes with the same value as the favorite cube
        int same_value_count = 0;
        for (int i = greater_count; i < n && sorted_a[i] == fav_value; ++i)
        {
            same_value_count++;
        }

        // Determine if the favorite cube is in the removed range
        if (greater_count >= k)
        {
            cout << "NO" << endl; // Favorite cube cannot be removed
        }
        else if (greater_count + same_value_count <= k)
        {
            cout << "YES" << endl; // Favorite cube is definitely removed
        }
        else
        {
            cout << "MAYBE" << endl; // Uncertain if the favorite cube is removed
        }
    }
}

int main()
{

    solve();
    return 0;
}
