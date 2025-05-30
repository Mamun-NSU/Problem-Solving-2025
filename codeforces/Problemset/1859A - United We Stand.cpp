// Link: https://codeforces.com/problemset/problem/1859/A

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(const vector<int> &b, const vector<int> &c)
{
    for (int bi : b)
    {
        for (int cj : c)
        {
            if (bi % cj == 0)
                return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        sort(a.begin(), a.end());
        bool found = false;

        for (int i = 1; i < n; ++i)
        {
            vector<int> b(a.begin(), a.begin() + i);
            vector<int> c(a.begin() + i, a.end());

            if (!b.empty() && !c.empty() && isValid(b, c))
            {
                cout << b.size() << " " << c.size() << endl;
                for (int x : b)
                    cout << x << " ";
                cout << endl;
                for (int x : c)
                    cout << x << " ";
                cout << endl;
                found = true;
                break;
            }
        }

        if (!found)
            cout << -1 << endl;
    }
    return 0;
}
