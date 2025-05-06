// Link: https://leetcode.com/problems/build-array-from-permutation/description/

class Solution
{
public:
    vector<int> buildArray(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n);

        // Step 1: Iterate through each index
        for (int i = 0; i < n; i++)
        {

            // Step 2: Assign ans[i] to nums[nums[i]]
            ans[i] = nums[nums[i]];
        }

        // Step 3: Return the result array
        return ans;
    }
};