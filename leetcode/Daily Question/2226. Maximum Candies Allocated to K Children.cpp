// Link: https://leetcode.com/problems/maximum-candies-allocated-to-k-children/description/

class Solution
{
public:
    int maximumCandies(vector<int> &candies, long long k)
    {
        long long left = 1, right = *max_element(candies.begin(), candies.end());
        int result = 0;

        while (left <= right)
        {
            long long mid = left + (right - left) / 2;
            long long count = 0;

            // Calculate number of children that can be served with mid candies each
            for (int candy : candies)
            {
                count += candy / mid;
            }

            if (count >= k)
            {
                result = mid; // Valid answer, try for a bigger mid
                left = mid + 1;
            }
            else
            {
                right = mid - 1; // Reduce mid
            }
        }

        return result;
    }
};
