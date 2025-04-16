// Link: https://codeforces.com/problemset/problem/1520/D

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<int, long long> freq;
        for (int i = 0; i < n; ++i)
        {
            int a;
            cin >> a;
            int b = a - i;
            freq[b]++;
        }
        long long result = 0;
        for (auto &p : freq)
        {
            long long f = p.second;
            result += f * (f - 1) / 2;
        }
        cout << result << endl;
    }
    return 0;
}
