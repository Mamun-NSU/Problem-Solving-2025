// Link: https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/description/

class Solution
{
public:
    int minimumRecolors(string blocks, int k)
    {
        int n = blocks.size();
        int min_ops = k; // Maximum possible operations required is k
        int white_count = 0;

        // Count white blocks in the first window of size k
        for (int i = 0; i < k; i++)
        {
            if (blocks[i] == 'W')
            {
                white_count++;
            }
        }
        min_ops = white_count; // Initialize min_ops with first window count

        // Slide the window across the string
        for (int i = k; i < n; i++)
        {
            if (blocks[i] == 'W')
                white_count++; // Add new block
            if (blocks[i - k] == 'W')
                white_count--; // Remove old block

            min_ops = min(min_ops, white_count); // Update min_ops
        }

        return min_ops;
    }
};
