// Link: https://codeforces.com/problemset/problem/1352/B

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        int k;
        cin >> n >> k;

        // Try odd numbers
        if (n >= k && n % 2 == k % 2)
        {
            cout << "YES\n";
            for (int i = 0; i < k - 1; ++i)
                cout << 1 << " ";
            cout << n - (k - 1) << "\n";
        }
        // Try even numbers
        else if (n >= 2 * k && n % 2 == 0)
        {
            cout << "YES\n";
            for (int i = 0; i < k - 1; ++i)
                cout << 2 << " ";
            cout << n - 2 * (k - 1) << "\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
