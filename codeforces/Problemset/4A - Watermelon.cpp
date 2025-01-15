#include <iostream>
using namespace std;

int main()
{
    int w;
    cin >> w;

    // A watermelon can be divided into two even parts only if:
    // 1. The weight is greater than 2 (as both parts must be positive)
    // 2. The weight is even
    if (w > 2 && w % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}