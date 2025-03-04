// Link: https://codeforces.com/problemset/problem/131/A

#include <iostream>
#include <cctype>
using namespace std;

bool shouldChangeCase(const string &s)
{
    bool allCaps = true;
    for (int i = 1; i < s.size(); i++)
    {
        if (!isupper(s[i]))
        {
            allCaps = false;
            break;
        }
    }
    return allCaps;
}

int main()
{
    string s;
    cin >> s;

    if (shouldChangeCase(s))
    {
        for (char &c : s)
        {
            c = isupper(c) ? tolower(c) : toupper(c);
        }
    }

    cout << s << endl;
    return 0;
}
