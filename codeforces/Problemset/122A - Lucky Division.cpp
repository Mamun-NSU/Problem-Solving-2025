// Link: https://codeforces.com/problemset/problem/122/A

#include <iostream>
using namespace std;

// Function to check if a number is lucky
bool isLucky(int num)
{
    while (num > 0)
    {
        int digit = num % 10;
        if (digit != 4 && digit != 7)
        {
            return false;
        }
        num /= 10;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    // Check if n is a lucky number
    if (isLucky(n))
    {
        cout << "YES" << endl;
        return 0;
    }

    // List of known lucky numbers within the range (1 to 1000)
    int luckyNumbers[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    // Check if n is divisible by any lucky number
    for (int lucky : luckyNumbers)
    {
        if (n % lucky == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
