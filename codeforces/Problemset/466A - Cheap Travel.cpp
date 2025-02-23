// Link: https://codeforces.com/problemset/problem/466/A

#include <iostream>
#include <algorithm> // Include this for std::min
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    // Cost if buying single-ride tickets for all rides
    int cost_single = n * a;

    // Cost if buying only m-ride tickets (possibly extra rides)
    int cost_m_tickets = (n / m) * b + ((n % m) ? b : 0);

    // Cost if buying a mix of m-ride tickets and single tickets for the remainder
    int cost_mixed = (n / m) * b + (n % m) * a;

    // Find the minimum cost using std::min multiple times
    cout << min(cost_single, min(cost_m_tickets, cost_mixed)) << endl;

    return 0;
}
