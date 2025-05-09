// Link: https://codeforces.com/problemset/problem/550/A

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();

    // Check for "AB" followed by "BA"
    size_t pos1 = s.find("AB");
    if (pos1 != string::npos)
    {
        size_t pos2 = s.find("BA", pos1 + 2);
        if (pos2 != string::npos)
        {
            cout << "YES\n";
            return 0;
        }
    }

    // Check for "BA" followed by "AB"
    pos1 = s.find("BA");
    if (pos1 != string::npos)
    {
        size_t pos2 = s.find("AB", pos1 + 2);
        if (pos2 != string::npos)
        {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";
    return 0;
}
