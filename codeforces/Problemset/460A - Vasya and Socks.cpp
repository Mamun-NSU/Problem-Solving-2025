// Link: https://codeforces.com/problemset/problem/460/A

#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int days = 0;
    while (n > 0)
    {
        days++;
        n--; // Vasya wears a new pair of socks each day
        if (days % m == 0)
        {
            n++; // Mom buys a new pair of socks every m-th day
        }
    }

    cout << days << endl;
    return 0;
}
