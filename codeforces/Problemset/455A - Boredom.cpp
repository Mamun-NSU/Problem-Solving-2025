// Link: https://codeforces.com/problemset/problem/455/A

#include <iostream>
#include <vector>
using namespace std;

const int MAX_A = 100000;

int main()
{
    int n;
    cin >> n;

    vector<long long> freq(MAX_A + 1, 0);

    // Read input and count frequency of each number
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        freq[x]++;
    }

    // DP to calculate maximum points
    vector<long long> dp(MAX_A + 1, 0);
    dp[0] = 0;
    dp[1] = freq[1]; // Base case

    for (int i = 2; i <= MAX_A; i++)
    {
        dp[i] = max(dp[i - 1], dp[i - 2] + i * freq[i]);
    }

    cout << dp[MAX_A] << endl;

    return 0;
}
