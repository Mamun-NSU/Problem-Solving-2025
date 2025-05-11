// Link: https://codeforces.com/problemset/problem/1296/B

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long s;
        cin >> s;
        long long total_spent = 0;
        while (s >= 10)
        {
            long long spend = s - s % 10;
            total_spent += spend;
            s = s % 10 + spend / 10;
        }
        total_spent += s;
        cout << total_spent << endl;
    }
    return 0;
}
