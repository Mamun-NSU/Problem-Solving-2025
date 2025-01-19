// Link: https://leetcode.com/problems/rotate-array/description/

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        k = k % n;     // Handle cases where k > n
        int count = 0; // Number of elements moved

        for (int start = 0; count < n; start++)
        {
            int current = start;
            int prev = nums[start];
            do
            {
                int next = (current + k) % n; // Calculate the new position
                swap(nums[next], prev);       // Move the element
                current = next;
                count++; // Increment the count
            } while (start != current); // Continue until the cycle completes
        }
    }
};