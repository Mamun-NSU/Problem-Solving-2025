// Link: https://codeforces.com/problemset/problem/474/B

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> prefix(n);

    // Read piles and construct prefix sums
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int worms;
        cin >> worms;
        sum += worms;
        prefix[i] = sum; // Store cumulative sum
    }

    int m;
    cin >> m;
    vector<int> queries(m);
    for (int i = 0; i < m; i++)
    {
        cin >> queries[i];
    }

    // Answer each query using binary search
    for (int q : queries)
    {
        int pile = lower_bound(prefix.begin(), prefix.end(), q) - prefix.begin();
        cout << pile + 1 << '\n'; // Convert 0-based index to 1-based
    }

    return 0;
}
