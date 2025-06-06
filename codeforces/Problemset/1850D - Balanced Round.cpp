// Link: https://codeforces.com/problemset/problem/1850/D

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        sort(a.begin(), a.end());

        int maxLen = 1, currLen = 1;

        for (int i = 1; i < n; ++i)
        {
            if (a[i] - a[i - 1] <= k)
            {
                currLen++;
                maxLen = max(maxLen, currLen);
            }
            else
            {
                currLen = 1;
            }
        }

        cout << n - maxLen << endl;
    }

    return 0;
}
