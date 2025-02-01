// Link: https://codeforces.com/problemset/problem/318/A

#include <iostream>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    long long oddCount = (n + 1) / 2; // Number of odd numbers in the sequence

    if (k <= oddCount)
    {
        // If k is within the odd numbers sequence
        cout << 2 * k - 1 << endl;
    }
    else
    {
        // If k is within the even numbers sequence
        cout << 2 * (k - oddCount) << endl;
    }

    return 0;
}
