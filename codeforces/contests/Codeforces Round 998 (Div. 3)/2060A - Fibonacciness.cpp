// Link: https://codeforces.com/contest/2060/problem/A ?

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t; // Input test case
    while (t--)
    {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        int maxFibonacciness = 0;
        for (int a3 = -100; a3 <= 100; ++a3)
        {
            int fibCount = 0;
            if (a4 == a2 + a3)
                ++fibCount;
            if (a5 == a3 + a4)
                ++fibCount;
            if (a3 == a1 + a2)
                ++fibCount;
            maxFibonacciness = max(maxFibonacciness, fibCount);
        }

        cout << maxFibonacciness << endl;
    }

    return 0;
}