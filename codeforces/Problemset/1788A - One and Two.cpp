// Link: https://codeforces.com/problemset/problem/1788/A

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int total_twos = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 2)
                total_twos++;
        }

        int left_twos = 0;
        bool found = false;
        for (int k = 0; k < n - 1; k++)
        {
            if (a[k] == 2)
                left_twos++;

            int right_twos = total_twos - left_twos;
            if (left_twos == right_twos)
            {
                cout << k + 1 << endl;
                found = true;
                break;
            }
        }

        if (!found)
            cout << -1 << endl;
    }
    return 0;
}
