// Link: https://codeforces.com/problemset/problem/451/A

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (min(n, m) % 2 == 1)
        cout << "Akshat" << endl;
    else
        cout << "Malvika" << endl;
    return 0;
}
