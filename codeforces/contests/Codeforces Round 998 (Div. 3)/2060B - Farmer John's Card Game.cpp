// Link: https://codeforces.com/contest/2060/problem/B

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canPlayGame(const vector<vector<int>> &decks, vector<int> &order)
{
    int n = decks.size();
    vector<int> pointers(n, 0); // Pointers to the current card for each cow
    int lastCard = -1;          // Top card of the pile

    for (int round = 0; round < decks[0].size(); ++round)
    {
        for (int cow : order)
        {
            // Find the next card the cow can play
            while (pointers[cow] < decks[cow].size() && decks[cow][pointers[cow]] <= lastCard)
            {
                ++pointers[cow];
            }

            // If the cow cannot play any card, return false
            if (pointers[cow] == decks[cow].size())
            {
                return false;
            }

            // Place the card on the pile
            lastCard = decks[cow][pointers[cow]];
            ++pointers[cow];
        }
    }

    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> decks(n, vector<int>(m));
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> decks[i][j];
            }
            sort(decks[i].begin(), decks[i].end()); // Sort each deck for optimal play
        }

        vector<int> order(n);
        for (int i = 0; i < n; ++i)
        {
            order[i] = i;
        }

        bool found = false;
        do
        {
            if (canPlayGame(decks, order))
            {
                found = true;
                break;
            }
        } while (next_permutation(order.begin(), order.end()));

        if (found)
        {
            for (int i = 0; i < n; ++i)
            {
                cout << order[i] + 1 << " ";
            }
            cout << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }

    return 0;
}