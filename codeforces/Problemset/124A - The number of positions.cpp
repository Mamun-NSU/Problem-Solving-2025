// Link: https://codeforces.com/problemset/problem/124/A

#include <iostream>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    cout << (n - a > b ? b + 1 : n - a) << endl;
    return 0;
}
