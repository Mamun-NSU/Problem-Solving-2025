// Link: https://leetcode.com/problems/count-days-without-meetings/description/

class Solution
{
public:
    int countDays(int days, vector<vector<int>> &meetings)
    {
        // Sort meetings by start time
        sort(meetings.begin(), meetings.end());

        int availableDays = 0;
        int lastEnd = 0; // Track the last meeting end day

        for (const auto &meeting : meetings)
        {
            int start = meeting[0];
            int end = meeting[1];

            // Count days available before this meeting starts
            if (start > lastEnd + 1)
            {
                availableDays += (start - lastEnd - 1);
            }

            // Update lastEnd to track merged intervals
            lastEnd = max(lastEnd, end);
        }

        // Count days after the last meeting till the last working day
        if (lastEnd < days)
        {
            availableDays += (days - lastEnd);
        }

        return availableDays;
    }
};