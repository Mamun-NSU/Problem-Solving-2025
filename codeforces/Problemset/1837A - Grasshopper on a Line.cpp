// Link: https://codeforces.com/problemset/problem/1837/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, k;
        cin >> x >> k;

        if (x % k != 0)
        {
            cout << 1 << '\n';
            cout << x << '\n';
        }
        else
        {
            // Try (x-1) and 1
            if ((x - 1) % k != 0 && 1 % k != 0)
            {
                cout << 2 << '\n';
                cout << x - 1 << " 1\n";
            }
            else
            {
                // Safe fallback: use x+1 and -1
                // x+1 -1 = x and both can't be divisible by k
                cout << 2 << '\n';
                cout << x + 1 << " -1\n";
            }
        }
    }
    return 0;
}
