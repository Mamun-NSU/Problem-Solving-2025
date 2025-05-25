// Link: https://codeforces.com/problemset/problem/478/B

#include <iostream>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;

    // Maximum
    long long max_team_size = n - m + 1;
    long long kmax = max_team_size * (max_team_size - 1) / 2;

    // Minimum
    long long a = n / m;
    long long b = n % m;
    long long kmin = (m - b) * a * (a - 1) / 2 + b * (a + 1) * a / 2;

    cout << kmin << " " << kmax << endl;

    return 0;
}
