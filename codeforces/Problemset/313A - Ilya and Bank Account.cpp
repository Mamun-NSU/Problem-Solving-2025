// Link: https://codeforces.com/problemset/problem/313/A

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n >= 0)
    {
        cout << n << endl;
        return 0;
    }

    // Convert to positive for easier manipulation
    int option1 = n / 10;                    // Remove last digit
    int option2 = (n / 100) * 10 + (n % 10); // Remove second last digit

    cout << max(n, max(option1, option2)) << endl;

    return 0;
}
