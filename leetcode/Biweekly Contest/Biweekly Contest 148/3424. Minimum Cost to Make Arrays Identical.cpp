// Link: https://leetcode.com/problems/minimum-cost-to-make-arrays-identical/description/

class Solution
{
public:
    long long minCost(vector<int> &arr, vector<int> &brr, long long k)
    {
        int n = arr.size();
        long long totalCost = 0;

        for (int i = 0; i < n; ++i)
        {
            totalCost += abs(arr[i] - brr[i]);
        }

        // If rearrangement is allowed, consider it
        long long rearrangeCost = k;
        vector<int> sortedArr = arr;
        vector<int> sortedBrr = brr;
        sort(sortedArr.begin(), sortedArr.end());
        sort(sortedBrr.begin(), sortedBrr.end());

        for (int i = 0; i < n; ++i)
        {
            rearrangeCost += abs(sortedArr[i] - sortedBrr[i]);
        }

        return min(totalCost, rearrangeCost);
    }
};