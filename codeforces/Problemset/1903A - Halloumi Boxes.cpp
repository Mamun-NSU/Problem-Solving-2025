// Link: https://codeforces.com/problemset/problem/1903/A

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
        int n, k;
        cin >> n >> k;
        vector<int> a(n), sorted;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        sorted = a;
        sort(sorted.begin(), sorted.end());

        if (k == 1)
        {
            if (a == sorted)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}
