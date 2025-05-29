// Link: https://codeforces.com/problemset/problem/1624/B

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        bool possible = false;

        // Multiply a
        if ((2 * b - c) % a == 0 && (2 * b - c) / a > 0)
            possible = true;

        // Multiply b
        else if ((a + c) % (2 * b) == 0 && (a + c) / (2 * b) > 0)
            possible = true;

        // Multiply c
        else if ((2 * b - a) % c == 0 && (2 * b - a) / c > 0)
            possible = true;

        cout << (possible ? "YES" : "NO") << '\n';
    }
    return 0;
}
