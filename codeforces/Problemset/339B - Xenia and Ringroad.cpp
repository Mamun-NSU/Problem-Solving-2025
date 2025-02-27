// Link: https://codeforces.com/problemset/problem/339/B

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    long long time = 0;
    int currentHouse = 1;

    for (int i = 0; i < m; i++)
    {
        int targetHouse;
        cin >> targetHouse;

        if (targetHouse >= currentHouse)
        {
            time += targetHouse - currentHouse;
        }
        else
        {
            time += (n - currentHouse) + targetHouse;
        }

        currentHouse = targetHouse;
    }

    cout << time << endl;
    return 0;
}