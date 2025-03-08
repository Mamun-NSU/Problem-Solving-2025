// Link: https://codeforces.com/problemset/problem/520/B

#include <iostream>
using namespace std;

int minOperations(int n, int m)
{
    int steps = 0;
    while (m > n)
    {
        if (m % 2 == 0)
        {
            m /= 2;
        }
        else
        {
            m++;
        }
        steps++;
    }
    return steps + (n - m); // Add remaining decrements if needed
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << minOperations(n, m) << endl;
    return 0;
}
