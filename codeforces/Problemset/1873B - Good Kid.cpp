#include <iostream>
#include <vector>
#include <algorithm>
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
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        long long max_product = 0;

        for (int i = 0; i < n; ++i)
        {
            vector<int> temp = a;
            temp[i] += 1; // Add 1 to the current digit

            long long current_product = 1;
            for (int num : temp)
            {
                current_product *= num;
            }

            max_product = max(max_product, current_product);
        }

        cout << max_product << endl;
    }

    return 0;
}
