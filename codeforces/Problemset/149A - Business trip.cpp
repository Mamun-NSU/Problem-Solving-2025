// Link: https://codeforces.com/problemset/problem/149/A

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int k;
    cin >> k;
    vector<int> a(12);
    for (int i = 0; i < 12; ++i)
        cin >> a[i];

    sort(a.rbegin(), a.rend()); // sort descending

    int total = 0, months = 0;
    while (months < 12 && total < k)
    {
        total += a[months];
        months++;
    }

    if (total >= k)
        cout << months << endl;
    else
        cout << -1 << endl;

    return 0;
}
