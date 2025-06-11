// Link: https://codeforces.com/problemset/problem/577/A

#include <iostream>
using namespace std;

int main()
{
    int n;
    long long x;
    cin >> n >> x;

    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (x % i == 0)
        {
            int j = x / i;
            if (j <= n)
            {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}
