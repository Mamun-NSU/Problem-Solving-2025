// Link: https://leetcode.com/problems/number-of-sub-arrays-with-odd-sum/description/

const int M = 1e9 + 7;
class Solution
{
public:
    int numOfSubarrays(vector<int> &arr)
    {
        int cnt = 0;
        int n = arr.size();
        int odd = 0, even = 1, sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if (sum % 2 == 0)
                even++;
            else
                odd++;

            if (sum % 2 == 0)
                cnt += (odd);
            else
                cnt += (even);

            cnt %= M;
        }

        return cnt;
    }
};