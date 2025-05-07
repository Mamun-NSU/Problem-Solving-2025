// Link: https://codeforces.com/problemset/problem/1883/B

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;

        unordered_map<char, int> freq;
        for (char c : s)
        {
            freq[c]++;
        }

        int odd_count = 0;
        for (auto &[ch, count] : freq)
        {
            if (count % 2 != 0)
                odd_count++;
        }

        int remaining = n - k;

        if (remaining < 0)
        {
            cout << "NO" << endl;
        }
        else if (remaining % 2 == 0)
        {
            cout << (odd_count <= k ? "YES" : "NO") << endl;
        }
        else
        {
            cout << (odd_count <= k + 1 ? "YES" : "NO") << endl;
        }
    }
    return 0;
}
