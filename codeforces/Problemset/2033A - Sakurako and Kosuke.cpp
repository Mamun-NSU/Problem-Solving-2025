// Link: https://codeforces.com/problemset/problem/2033/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x = 0;
        int move = 1;
        while (abs(x) <= n)
        {
            int step = 2 * move - 1;
            if (move % 2 == 1)
            {
                x -= step; // Sakurako's move
            }
            else
            {
                x += step; // Kosuke's move
            }
            if (abs(x) > n)
                break;
            move++;
        }
        if (move % 2 == 1)
            cout << "Sakurako" << endl;
        else
            cout << "Kosuke" << endl;
    }
    return 0;
}
