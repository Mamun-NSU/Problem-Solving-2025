// Link: https://codeforces.com/problemset/problem/1692/C

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    void findBishopPosition(int t, vector<vector<string>> &testCases)
    {
        for (int testCase = 0; testCase < t; ++testCase)
        {
            vector<string> &board = testCases[testCase];
            for (int r = 1; r < 7; ++r)
            { // Rows 2 to 7 (0-indexed 1 to 6)
                for (int c = 1; c < 7; ++c)
                { // Columns 2 to 7 (0-indexed 1 to 6)
                    if (board[r][c] == '#' &&
                        board[r - 1][c - 1] == '#' && board[r - 1][c + 1] == '#' &&
                        board[r + 1][c - 1] == '#' && board[r + 1][c + 1] == '#')
                    {
                        cout << r + 1 << " " << c + 1 << endl; // Convert to 1-based indexing
                        break;
                    }
                }
            }
        }
    }
};

int main()
{
    int t;
    cin >> t;
    vector<vector<string>> testCases(t, vector<string>(8));
    for (int i = 0; i < t; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {
            cin >> testCases[i][j];
        }
    }

    Solution solution;
    solution.findBishopPosition(t, testCases);

    return 0;
}
