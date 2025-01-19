// Link: https://codeforces.com/contest/2060/problem/D

#include <iostream>
#include <vector>
using namespace std;

// Function to check if the sequence can be made non-decreasing
bool canMakeNonDecreasing(int n, vector<int> &a)
{
    int minValue = a[0];

    for (int i = 1; i < n; i++)
    {
        // Reduce the current element to maintain non-decreasing order
        if (a[i] < minValue)
        {
            return false;
        }
        minValue = a[i] - min(minValue, a[i]);
    }

    return true;
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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (canMakeNonDecreasing(n, a))
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
