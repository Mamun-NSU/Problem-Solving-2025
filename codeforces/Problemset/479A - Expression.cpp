// Link: https://codeforces.com/problemset/problem/479/A

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int max_value = max({a + b + c, a * b * c, (a + b) * c, a * (b + c)});

    cout << max_value << endl;
    return 0;
}
