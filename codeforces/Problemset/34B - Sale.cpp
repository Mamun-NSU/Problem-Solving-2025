// Link: https://codeforces.com/problemset/problem/34/B

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> prices(n);
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    vector<int> negative_prices;
    for (int price : prices)
    {
        if (price < 0)
        {
            negative_prices.push_back(price);
        }
    }

    // Sort negative prices in ascending order
    sort(negative_prices.begin(), negative_prices.end());

    // Take up to 'm' most negative values and sum their absolute values
    int max_money = 0;
    for (int i = 0; i < min(m, (int)negative_prices.size()); i++)
    {
        max_money += abs(negative_prices[i]);
    }

    cout << max_money << endl;
    return 0;
}
