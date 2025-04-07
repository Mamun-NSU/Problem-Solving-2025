// Link:  https://codeforces.com/problemset/problem/445/A

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<string> board(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> board[i];
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (board[i][j] == '-')
            {
                cout << '-';
            }
            else
            {
                if ((i + j) % 2 == 0)
                    cout << 'B';
                else
                    cout << 'W';
            }
        }
        cout << '\n';
    }

    return 0;
}
