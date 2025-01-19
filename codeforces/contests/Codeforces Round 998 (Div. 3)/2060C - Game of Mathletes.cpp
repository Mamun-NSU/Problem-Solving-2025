// Link: https://codeforces.com/contest/2060/problem/C

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Function to calculate the score for a single test case
int calculateScore(int n, int k, const vector<int> &x)
{
    unordered_map<int, int> freq;
    int score = 0;

    // Count the frequency of each number and calculate pairs on the fly
    for (int num : x)
    {
        int complement = k - num;
        if (freq[complement] > 0)
        {
            // If a complement exists, form a pair and increase the score
            score++;
            freq[complement]--;
        }
        else
        {
            // Otherwise, increase the frequency of the current number
            freq[num]++;
        }
    }

    return score;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> x(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }

        cout << calculateScore(n, k, x) << "\n";
    }

    return 0;
}
