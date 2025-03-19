// Link: https://codeforces.com/problemset/problem/1980/A

#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string a;
        cin >> a;

        // Count occurrences of each difficulty level
        map<char, int> freq;
        for (char c : a)
        {
            freq[c]++;
        }

        // Determine missing problems
        int missing = 0;
        for (char c = 'A'; c <= 'G'; c++)
        {
            if (freq[c] < m)
            {
                missing += (m - freq[c]); // Add missing problems
            }
        }

        cout << missing << endl;
    }

    return 0;
}
