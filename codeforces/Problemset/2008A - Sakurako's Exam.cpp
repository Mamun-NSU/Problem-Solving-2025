// Link: https://codeforces.com/problemset/problem/2008/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int total = a * 1 + b * 2;
        if (total % 2 == 1)
        {
            cout << "NO\n";
        }
        else
        {
            int target = total / 2;
            // max you can make with 2's is b * 2
            // to make target, the rest must be covered by 1's
            // i.e., 2x twos + 1x ones = target
            // We try to use as many 2s as possible to reach target
            int max_two_part = min(b, target / 2);
            int remaining = target - max_two_part * 2;
            if (remaining <= a)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
