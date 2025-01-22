// Link: https://codeforces.com/problemset/problem/1968/A?

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        // Choosing y = x - 1 is often optimal
        cout << x - 1 << endl;
    }
    return 0;
}
