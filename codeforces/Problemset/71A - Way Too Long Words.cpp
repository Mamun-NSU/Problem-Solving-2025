// Link: https://codeforces.com/problemset/problem/71/A

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t; // Number of test cases
    cin >> t;

    while (t--)
    {
        string word;
        cin >> word;
        int n = word.length(); // Length of the word

        if (n > 10)
        {
            cout << word[0] << n - 2 << word[n - 1] << endl;
        }
        else
        {
            cout << word << endl;
        }
    }

    return 0;
}
