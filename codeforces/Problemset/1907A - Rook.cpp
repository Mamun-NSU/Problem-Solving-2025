// Link : https: // codeforces.com/problemset/problem/1907/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string pos;
        cin >> pos;

        char col = pos[0];
        char row = pos[1];

        // Print all positions in the same column (fixed col, varying row)
        for (char r = '1'; r <= '8'; r++)
        {
            if (r != row)
            {
                cout << col << r << endl;
            }
        }

        // Print all positions in the same row (fixed row, varying col)
        for (char c = 'a'; c <= 'h'; c++)
        {
            if (c != col)
            {
                cout << c << row << endl;
            }
        }
    }

    return 0;
}
