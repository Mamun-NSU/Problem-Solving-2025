// Link: https://codeforces.com/problemset/problem/1335/B

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        string pattern = "";
        for (int i = 0; i < b; ++i)
            pattern += ('a' + i);
        // Make the pattern of length `a` by repeating if needed
        while ((int)pattern.size() < a)
            pattern += pattern;
        // Final string of length `n` by repeating base pattern
        string result = "";
        for (int i = 0; i < n; ++i)
            result += pattern[i % a];
        cout << result << endl;
    }
    return 0;
}
