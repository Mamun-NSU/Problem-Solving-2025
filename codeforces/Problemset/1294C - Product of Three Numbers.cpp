// Link: https://codeforces.com/problemset/problem/1294/C

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        bool found = false;

        for (long long a = 2; a * a * a <= n; ++a)
        {
            if (n % a != 0)
                continue;
            long long n1 = n / a;
            for (long long b = a + 1; b * b <= n1; ++b)
            {
                if (n1 % b != 0)
                    continue;
                long long c = n1 / b;
                if (c > b && c != a && c != b)
                {
                    cout << "YES\n";
                    cout << a << " " << b << " " << c << "\n";
                    found = true;
                    break;
                }
            }
            if (found)
                break;
        }

        if (!found)
        {
            cout << "NO\n";
        }
    }
    return 0;
}
