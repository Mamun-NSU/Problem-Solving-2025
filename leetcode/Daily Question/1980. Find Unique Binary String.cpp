// Link: https://leetcode.com/problems/find-unique-binary-string/description/

class Solution
{
public:
    void f(int n, string curr, vector<string> &ans)
    {
        if (curr.size() > n)
            return;
        if (curr.size() == n)
        {
            ans.push_back(curr);
            return;
        }

        f(n, curr + '0', ans);
        f(n, curr + '1', ans);
    }

    string findDifferentBinaryString(vector<string> &nums)
    {
        int n = nums.size();
        unordered_set<string> s;
        for (auto el : nums)
            s.insert(el);

        vector<string> ans;
        string curr;

        f(n, curr, ans);

        for (int i = 0; i < ans.size(); i++)
        {
            if (s.find(ans[i]) == s.end())
                return ans[i];
        }

        return " ";
    }
};