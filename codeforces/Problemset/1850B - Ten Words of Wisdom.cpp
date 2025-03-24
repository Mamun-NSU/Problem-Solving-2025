// Link: https://codeforces.com/problemset/problem/1850/B

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int max_quality = -1, winner_index = -1;

        for (int i = 1; i <= n; ++i)
        {
            int ai, bi;
            cin >> ai >> bi;

            if (ai <= 10 && bi > max_quality)
            {
                max_quality = bi;
                winner_index = i;
            }
        }

        cout << winner_index << endl;
    }
    return 0;
}
