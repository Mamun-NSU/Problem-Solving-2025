// Link: https://codeforces.com/problemset/problem/231/A

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; // Number of problems

    int count = 0; // Counter for problems the friends will solve

    for (int i = 0; i < n; ++i)
    {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;

        // Check if at least two of them are sure about the solution
        if (petya + vasya + tonya >= 2)
        {
            ++count;
        }
    }

    cout << count << endl; // Output the result

    return 0;
}
