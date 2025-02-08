// Link: https://codeforces.com/problemset/problem/1926/B

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> grid(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> grid[i];
        }

        int firstRow = -1, firstCol = -1, lastRow = -1, lastCol = -1;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (grid[i][j] == '1')
                {
                    if (firstRow == -1)
                    {
                        firstRow = i;
                        firstCol = j;
                    }
                    lastRow = i;
                    lastCol = j;
                }
            }
        }

        int size = lastRow - firstRow + 1;
        bool isSquare = (size == (lastCol - firstCol + 1));

        for (int i = firstRow; i <= lastRow && isSquare; ++i)
        {
            for (int j = firstCol; j <= lastCol; ++j)
            {
                if (grid[i][j] != '1')
                {
                    isSquare = false;
                    break;
                }
            }
        }

        cout << (isSquare ? "SQUARE" : "TRIANGLE") << endl;
    }

    return 0;
}
