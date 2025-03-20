// Link: https://codeforces.com/problemset/problem/1950/B

#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int size = 2 * n;
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (((i / 2) + (j / 2)) % 2 == 0)
                    cout << '#';
                else
                    cout << '.';
            }
            cout << "\n";
        }
    }
    return 0;
}
