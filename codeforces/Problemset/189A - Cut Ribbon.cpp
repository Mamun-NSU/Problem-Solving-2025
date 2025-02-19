// Link: https://codeforces.com/problemset/problem/189/A

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    vector<int> dp(n + 1, -1); // Initialize DP array with -1
    dp[0] = 0;                 // Base case: 0 length ribbon requires 0 pieces

    for (int i = 0; i <= n; i++)
    {
        if (dp[i] != -1)
        { // If i length ribbon can be formed
            if (i + a <= n)
                dp[i + a] = max(dp[i + a], dp[i] + 1);
            if (i + b <= n)
                dp[i + b] = max(dp[i + b], dp[i] + 1);
            if (i + c <= n)
                dp[i + c] = max(dp[i + c], dp[i] + 1);
        }
    }

    cout << dp[n] << endl;
    return 0;
}
