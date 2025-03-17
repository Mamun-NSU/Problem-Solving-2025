// Link: https://codeforces.com/problemset/problem/1985/B

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int bestX = 2;
        int maxSum = (n / 2) * (n / 2 + 1); // Correct initialization for x = 2

        for (int x = 3; x <= n; x++)
        {
            int k = n / x;                   // Maximum multiplier for x such that kx ≤ n
            int sum = (k * (k + 1) / 2) * x; // Sum of x, 2x, ..., kx

            if (sum > maxSum)
            {
                maxSum = sum;
                bestX = x;
            }
        }

        cout << bestX << endl;
    }

    return 0;
}
