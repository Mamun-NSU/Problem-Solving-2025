// Link: https://codeforces.com/problemset/problem/4/C

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<string, int> database;

    while (n--)
    {
        string name;
        cin >> name;

        if (database.find(name) == database.end())
        {
            // Name not found, register it normally
            database[name] = 0;
            cout << "OK" << endl;
        }
        else
        {
            // Name exists, find the next available numbered name
            database[name]++;
            string new_name = name + to_string(database[name]);
            while (database.find(new_name) != database.end())
            {
                database[name]++;
                new_name = name + to_string(database[name]);
            }
            database[new_name] = 0;
            cout << new_name << endl;
        }
    }
    return 0;
}
