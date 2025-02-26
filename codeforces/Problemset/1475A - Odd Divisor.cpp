// Link: https://codeforces.com/problemset/problem/1475/A

#include <iostream>
using namespace std;

bool isPowerOfTwo(long long n)
{
    return (n & (n - 1)) == 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        if (isPowerOfTwo(n))
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }

    return 0;
}
