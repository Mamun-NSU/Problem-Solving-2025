// Link: https://codeforces.com/problemset/problem/1971/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        cout << min(x, y) << " " << max(x, y) << endl;
    }
    return 0;
}
