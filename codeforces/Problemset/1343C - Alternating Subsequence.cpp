// Link: https://codeforces.com/problemset/problem/1343/C

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
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        long long sum = 0;
        int i = 0;
        while (i < n)
        {
            int current = a[i];
            int j = i;

            // Process a group of the same sign
            while (j < n && (a[j] > 0) == (current > 0))
            {
                current = max(current, a[j]);
                j++;
            }

            sum += current;
            i = j;
        }

        cout << sum << "\n";
    }

    return 0;
}
