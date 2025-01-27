// Link: https://leetcode.com/problems/jump-game-ii/description/

class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int n = nums.size();
        int jumps = 0;      // To count the number of jumps
        int currentEnd = 0; // End of the current jump range
        int farthest = 0;   // Farthest we can reach

        for (int i = 0; i < n - 1; ++i)
        {
            // Update the farthest we can reach from the current index
            farthest = max(farthest, i + nums[i]);

            // If we reach the end of the current jump range
            if (i == currentEnd)
            {
                ++jumps;               // Increment jump count
                currentEnd = farthest; // Update the range for the next jump
            }
        }

        return jumps;
    }
};