// Link: https://codeforces.com/problemset/problem/499/B

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    unordered_map<string, string> dict;

    // Read the language mappings
    for (int i = 0; i < m; ++i)
    {
        string a, b;
        cin >> a >> b;
        dict[a] = (a.length() <= b.length()) ? a : b; // Store the shorter word
    }

    // Process the lecture words
    for (int i = 0; i < n; ++i)
    {
        string word;
        cin >> word;
        cout << dict[word] << " ";
    }

    return 0;
}
