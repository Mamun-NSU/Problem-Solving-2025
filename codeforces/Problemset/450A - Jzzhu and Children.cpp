// Link: https://codeforces.com/problemset/problem/450/A

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];

    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int maxRounds = 0;
    int lastChild = 0;

    for (int i = 0; i < n; ++i)
    {
        int rounds = (a[i] + m - 1) / m; // equivalent to ceil(a[i] / m)
        if (rounds >= maxRounds)
        {
            maxRounds = rounds;
            lastChild = i + 1; // 1-based index
        }
    }

    cout << lastChild << endl;
    return 0;
}
