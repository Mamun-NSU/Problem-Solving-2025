// Link: https://codeforces.com/problemset/problem/2036/A

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void checkPerfectMelody(int n, vector<int> &melody)
{
    for (int i = 1; i < n; ++i)
    {
        int interval = abs(melody[i] - melody[i - 1]);
        if (interval != 5 && interval != 7)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> melody(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> melody[i];
        }
        checkPerfectMelody(n, melody);
    }
    return 0;
}
