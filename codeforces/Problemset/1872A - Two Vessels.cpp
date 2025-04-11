// Link: https://codeforces.com/problemset/problem/1872/A

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int diff = abs(a - b);
        int moves = (diff + 2 * c - 1) / (2 * c);
        cout << moves << endl;
    }
    return 0;
}
