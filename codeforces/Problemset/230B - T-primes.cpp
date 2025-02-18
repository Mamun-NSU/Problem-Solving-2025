// Link: https://codeforces.com/problemset/problem/230/B

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 1;
bitset<MAXN> is_prime;
unordered_set<long long> t_primes;

void sieve()
{
    is_prime.set();
    is_prime[0] = is_prime[1] = 0;
    for (long long i = 2; i < MAXN; i++)
    {
        if (is_prime[i])
        {
            t_primes.insert(i * i); // Store squares of prime numbers
            for (long long j = i * i; j < MAXN; j += i)
            {
                is_prime[j] = 0;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    int n;
    cin >> n;
    while (n--)
    {
        long long x;
        cin >> x;
        cout << (t_primes.count(x) ? "YES" : "NO") << '\n';
    }

    return 0;
}
