// Link: https://codeforces.com/problemset/problem/1857/A

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t; // Number of test cases
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n; // the length of the array a

        // vector<int> a(n);
        int a[n]; //

        // If we find the number of ODD elements of "a" is even, then result YES
        int oddCounter = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] % 2 == 1)
            {
                oddCounter++; // Count the ODD elements
            }
        }

        if (oddCounter % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
