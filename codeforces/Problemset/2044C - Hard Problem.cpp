// Link: https://codeforces.com/problemset/problem/2044/C

#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        long long m, a, b, c;
        cin >> m >> a >> b >> c;

        // Calculate maximum possible seating
        long long row1 = min(m, a);                        // Fill row 1 with a-preferred monkeys
        long long row2 = min(m, b);                        // Fill row 2 with b-preferred monkeys
        long long remaining_seats = 2 * m - (row1 + row2); // Remaining available seats
        long long additional = min(remaining_seats, c);    // Fill with c-preferred monkeys

        cout << (row1 + row2 + additional) << "\n";
    }

    return 0;
}
