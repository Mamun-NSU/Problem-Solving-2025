// Link:https://codeforces.com/problemset/problem/977/C

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a.begin(), a.end());

    if (k == 0)
    {
        if (a[0] > 1)
            cout << a[0] - 1 << endl;
        else
            cout << -1 << endl;
    }
    else if (k <= n)
    {
        if (k == n || a[k - 1] != a[k])
            cout << a[k - 1] << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
