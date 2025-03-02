// Link: https://codeforces.com/problemset/problem/327/A

#include <iostream>
#include <vector>
using namespace std;

int maxOnesAfterFlip(vector<int> &arr)
{
    int n = arr.size();
    int totalOnes = 0;

    // Step 1: Transform the array
    vector<int> transformed(n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            transformed[i] = -1; // Convert 1 to -1
            totalOnes++;
        }
        else
        {
            transformed[i] = 1; // Convert 0 to +1
        }
    }

    // Step 2: Apply Kadane’s algorithm to find max subarray sum
    int maxSum = 0, currentSum = 0;
    for (int i = 0; i < n; i++)
    {
        currentSum = max(transformed[i], currentSum + transformed[i]);
        maxSum = max(maxSum, currentSum);
    }

    // Step 3: Compute the maximum number of ones
    return (totalOnes == n) ? (n - 1) : (totalOnes + maxSum);
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << maxOnesAfterFlip(arr) << endl;
    return 0;
}
