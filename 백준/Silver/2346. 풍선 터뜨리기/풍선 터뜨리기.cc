#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    deque<int> deck;
    vector<int> vec;
    int n, tmp;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        deck.push_back(i);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        vec.push_back(tmp);
    }

    while (!deck.empty())
    {
        tmp = vec[deck.front() - 1];
        cout << deck.front() << " ";
        deck.pop_front();

        if (deck.empty())
            break;
        else if (tmp > 0)
        {
            for (int i = 0; i < tmp-1; i++)
            {
                deck.push_back(deck.front());
                deck.pop_front();
            }
        }
        else
        {
            for (int i = 0; i < tmp * -1; i++)
            {
                deck.push_front(deck.back());
                deck.pop_back();
            }
        }
    }

    return 0;
}