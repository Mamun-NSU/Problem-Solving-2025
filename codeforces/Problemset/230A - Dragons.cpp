// Link:  https://codeforces.com/problemset/problem/230/A

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> dragons(n);

    for (int i = 0; i < n; i++)
    {
        cin >> dragons[i].first >> dragons[i].second;
    }

    // Sort dragons by strength in ascending order
    sort(dragons.begin(), dragons.end());

    for (const auto &dragon : dragons)
    {
        if (s > dragon.first)
        {
            s += dragon.second; // Gain strength bonus
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
