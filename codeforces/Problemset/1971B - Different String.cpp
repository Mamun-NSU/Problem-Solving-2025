// Link: https://codeforces.com/problemset/problem/1971/B

#include <iostream>
#include <algorithm>
using namespace std;

bool allSame(const string &s)
{
    for (char c : s)
        if (c != s[0])
            return false;
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (allSame(s))
        {
            cout << "NO\n";
        }
        else
        {
            string r = s;
            sort(r.begin(), r.end());
            if (r == s)
            {
                // Try a different permutation
                next_permutation(r.begin(), r.end());
            }
            cout << "YES\n"
                 << r << "\n";
        }
    }
    return 0;
}
