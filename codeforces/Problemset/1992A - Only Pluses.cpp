// Link: https://codeforces.com/problemset/problem/1992/A

#include <iostream>
#include <algorithm>
using namespace std;

int maxBananas(int a, int b, int c)
{
    int maxProduct = a * b * c;

    for (int i = 0; i <= 5; ++i)
    {
        for (int j = 0; j <= 5 - i; ++j)
        {
            for (int k = 0; k <= 5 - i - j; ++k)
            {
                int newA = a + i;
                int newB = b + j;
                int newC = c + k;
                maxProduct = max(maxProduct, newA * newB * newC);
            }
        }
    }

    return maxProduct;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << maxBananas(a, b, c) << "\n";
    }
    return 0;
}
