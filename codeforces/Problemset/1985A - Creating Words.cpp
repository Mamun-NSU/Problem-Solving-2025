// Link: https://codeforces.com/problemset/problem/1985/A

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string a, b;
        cin >> a >> b;

        // Swap the first characters
        // swap(a[0], b[0]);|

        char temp;
        temp = a[0];
        a[0] = b[0];
        b[0] = temp;

        // Output the result
        cout << a << " " << b << endl;
    }

    return 0;
}
