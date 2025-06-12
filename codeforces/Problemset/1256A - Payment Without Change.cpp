// Link: https://codeforces.com/problemset/problem/1256/A

#include <iostream>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        long long a, b, n, S;
        cin >> a >> b >> n >> S;

        long long use_n = min(S / n, a);
        long long remaining = S - use_n * n;

        if (remaining <= b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
