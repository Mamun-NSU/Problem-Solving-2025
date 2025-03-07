// Link: https://codeforces.com/problemset/problem/1941/A

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countValidPairs(vector<int> &left, vector<int> &right, int k)
{
    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    int count = 0;
    int j = right.size() - 1;

    for (int i = 0; i < left.size(); i++)
    {
        while (j >= 0 && left[i] + right[j] > k)
        {
            j--;
        }
        count += (j + 1);
    }

    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> left(n), right(m);
        for (int i = 0; i < n; i++)
            cin >> left[i];
        for (int i = 0; i < m; i++)
            cin >> right[i];

        cout << countValidPairs(left, right, k) << endl;
    }
    return 0;
}
