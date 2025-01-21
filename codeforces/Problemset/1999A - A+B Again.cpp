// Link: https://codeforces.com/problemset/problem/1999/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t; // Number of test cases

    while (t--)
    {
        int n;
        cin >> n; // Read the two-digit number

        // Calculate the sum of the digits
        int sum = (n / 10) + (n % 10);

        // Output the result
        cout << sum << endl;
    }

    return 0;
}
