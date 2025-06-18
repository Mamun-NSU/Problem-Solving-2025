// Link: https://codeforces.com/problemset/problem/1742/E

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        // Build prefix sums and max up to i
        vector<long long> prefix(n);
        vector<int> max_up_to(n);

        prefix[0] = a[0];
        max_up_to[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + a[i];
            max_up_to[i] = max(max_up_to[i - 1], a[i]);
        }

        while (q--)
        {
            int k;
            cin >> k;

            // Find how many steps can be taken
            // where max_up_to[i] <= k
            int lo = 0, hi = n - 1, ans = -1;
            while (lo <= hi)
            {
                int mid = (lo + hi) / 2;
                if (max_up_to[mid] <= k)
                {
                    ans = mid;
                    lo = mid + 1;
                }
                else
                {
                    hi = mid - 1;
                }
            }

            if (ans == -1)
                cout << 0 << ' ';
            else
                cout << prefix[ans] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
