// Link:  https://codeforces.com/problemset/problem/118/A

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string input;
    cin >> input; // Read the input string

    string vowels = "aoyeuiAOYEUI";
    string result = "";

    for (char c : input)
    {
        // Convert uppercase letters to lowercase
        c = tolower(c);

        // Check if the character is not a vowel
        if (vowels.find(c) == string::npos)
        {
            result += '.'; // Add '.'
            result += c;   // Add the consonant
        }
    }

    cout << result << endl;
    return 0;
}
