// Link: https://codeforces.com/problemset/problem/580/A

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int max_length = 1, current_length = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
        {
            current_length++;
        }
        else
        {
            max_length = max(max_length, current_length);
            current_length = 1;
        }
    }

    max_length = max(max_length, current_length);
    cout << max_length << endl;

    return 0;
}
