// Link: https://codeforces.com/problemset/problem/579/A

#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int count = 0;
    while (x > 0)
    {
        count += (x & 1); // Count the number of set bits (1s) in binary representation
        x >>= 1;          // Right shift x by 1 (divide by 2)
    }

    cout << count << endl;
    return 0;
}
