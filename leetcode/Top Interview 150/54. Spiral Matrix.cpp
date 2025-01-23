// Link: https://leetcode.com/problems/spiral-matrix/description/

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> result;
        if (matrix.empty())
            return result;

        int top = 0, bottom = matrix.size() - 1;
        int left = 0, right = matrix[0].size() - 1;

        while (top <= bottom && left <= right)
        {
            // Traverse from left to right along the top row
            for (int j = left; j <= right; ++j)
            {
                result.push_back(matrix[top][j]);
            }
            ++top; // Move the top boundary downward

            // Traverse from top to bottom along the right column
            for (int i = top; i <= bottom; ++i)
            {
                result.push_back(matrix[i][right]);
            }
            --right; // Move the right boundary leftward

            // Traverse from right to left along the bottom row (if there is a bottom row left)
            if (top <= bottom)
            {
                for (int j = right; j >= left; --j)
                {
                    result.push_back(matrix[bottom][j]);
                }
                --bottom; // Move the bottom boundary upward
            }

            // Traverse from bottom to top along the left column (if there is a left column left)
            if (left <= right)
            {
                for (int i = bottom; i >= top; --i)
                {
                    result.push_back(matrix[i][left]);
                }
                ++left; // Move the left boundary rightward
            }
        }

        return result;
    }
};
