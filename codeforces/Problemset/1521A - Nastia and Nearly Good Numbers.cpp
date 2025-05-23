// Link: https://codeforces.com/problemset/problem/1521/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long A, B;
        cin >> A >> B;
        if (B == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << A << " " << A * B << " " << A * (B + 1) << endl;
        }
    }
    return 0;
}
