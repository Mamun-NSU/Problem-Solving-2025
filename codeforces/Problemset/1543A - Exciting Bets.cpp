// Link: https://codeforces.com/problemset/problem/1543/A

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << "0 0\n";
        }
        else
        {
            long long d = abs(a - b);
            long long r = a % d;
            long long moves = min(r, d - r);
            cout << d << " " << moves << "\n";
        }
    }
    return 0;
}
