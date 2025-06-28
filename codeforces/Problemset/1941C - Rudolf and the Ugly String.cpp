// Link: https://codeforces.com/problemset/problem/1941/C

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int count = 0;
        for (int i = 0; i <= n - 3;)
        {
            if (s.substr(i, 3) == "map" || s.substr(i, 3) == "pie")
            {
                count++;
                i += 3; // Skip to avoid overlap
            }
            else
            {
                i++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
