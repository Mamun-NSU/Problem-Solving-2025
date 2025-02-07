// Link: https://codeforces.com/problemset/problem/1843/C

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
        long long n, sum = 0;
        cin >> n;

        while (n > 0)
        {
            sum += n; // Add the current node to the sum
            n /= 2;   // Move to the parent node
        }

        cout << sum << "\n";
    }

    return 0;
}
