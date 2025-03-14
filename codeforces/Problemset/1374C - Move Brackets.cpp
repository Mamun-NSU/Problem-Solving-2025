// Link: https://codeforces.com/problemset/problem/1374/C

#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int balance = 0, min_balance = 0;
    for (char c : s)
    {
        if (c == '(')
            balance++;
        else
            balance--;
        min_balance = min(min_balance, balance);
    }

    cout << -min_balance << "\n"; // Number of moves required
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
