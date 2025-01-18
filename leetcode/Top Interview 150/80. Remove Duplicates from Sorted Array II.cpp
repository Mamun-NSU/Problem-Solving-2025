// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/description/

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int n = nums.size();
        if (n <= 2)
            return n; // If the size is 2 or less, no duplicates need to be removed.

        int index = 2; // Start from the 3rd position in the array (index 2).

        for (int i = 2; i < n; ++i)
        {
            // Check if the current number is different from the number two steps before.
            if (nums[i] != nums[index - 2])
            {
                nums[index] = nums[i]; // Update the current position in the array.
                ++index;               // Increment the index for the next unique number.
            }
        }

        return index; // Return the number of elements in the modified array.
    }
};
