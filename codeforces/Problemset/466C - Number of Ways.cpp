// Link: https://codeforces.com/problemset/problem/466/C

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    long long total = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        total += a[i];
    }

    if (total % 3 != 0)
    {
        cout << 0 << endl;
        return 0;
    }

    long long target = total / 3;
    long long currSum = 0;
    long long countTarget = 0;
    long long ways = 0;

    // we iterate until n-1 because the third part must be non-empty
    for (int i = 0; i < n - 1; ++i)
    {
        currSum += a[i];

        if (currSum == 2 * target)
        {
            // number of prefix sums equal to target before this
            ways += countTarget;
        }

        if (currSum == target)
        {
            countTarget++;
        }
    }

    cout << ways << endl;
    return 0;
}
