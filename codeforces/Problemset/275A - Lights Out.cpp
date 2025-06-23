// Link: https://codeforces.com/problemset/problem/275/A

#include <iostream>
using namespace std;

int main()
{
    int press[3][3];

    // Input the number of presses for each cell
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            cin >> press[i][j];

    // Initialize all lights to be on (1)
    int result[3][3];
    int dx[] = {0, 0, 0, 1, -1};
    int dy[] = {0, 1, -1, 0, 0};

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            int totalPresses = 0;
            for (int k = 0; k < 5; ++k)
            {
                int ni = i + dx[k];
                int nj = j + dy[k];
                if (ni >= 0 && ni < 3 && nj >= 0 && nj < 3)
                    totalPresses += press[ni][nj];
            }
            result[i][j] = (totalPresses % 2 == 0) ? 1 : 0;
        }
    }

    // Output the final state
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
            cout << result[i][j];
        cout << '\n';
    }

    return 0;
}
