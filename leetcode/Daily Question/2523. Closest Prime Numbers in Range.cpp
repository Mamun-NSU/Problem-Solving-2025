// Link: https://leetcode.com/problems/closest-prime-numbers-in-range/description/

class Solution
{
public:
    vector<int> closestPrimes(int left, int right)
    {
        // Step 1: Use Sieve of Eratosthenes to mark prime numbers
        const int MAX_N = 1e6 + 1;
        vector<bool> isPrime(MAX_N, true);
        isPrime[0] = isPrime[1] = false; // 0 and 1 are not primes

        for (int i = 2; i * i < MAX_N; i++)
        {
            if (isPrime[i])
            {
                for (int j = i * i; j < MAX_N; j += i)
                {
                    isPrime[j] = false;
                }
            }
        }

        // Step 2: Extract prime numbers within the given range
        vector<int> primes;
        for (int i = left; i <= right; i++)
        {
            if (isPrime[i])
                primes.push_back(i);
        }

        // Step 3: Find the closest prime pair
        if (primes.size() < 2)
            return {-1, -1};

        int minDiff = INT_MAX;
        vector<int> result(2);

        for (size_t i = 1; i < primes.size(); i++)
        {
            int diff = primes[i] - primes[i - 1];
            if (diff < minDiff)
            {
                minDiff = diff;
                result = {primes[i - 1], primes[i]};
            }
        }

        return result;
    }
};
