// Link: https://codeforces.com/problemset/problem/43/A

#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> score;
    string team, winner;

    for (int i = 0; i < n; i++)
    {
        cin >> team;
        score[team]++;
    }

    // The team with the maximum score is the winner
    if (score.begin()->second > next(score.begin())->second)
        winner = score.begin()->first;
    else
        winner = next(score.begin())->first;

    cout << winner << endl;
    return 0;
}
