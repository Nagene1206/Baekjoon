#include <iostream>
#include <deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    deque<int> deck;
    int n, tmp, f;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> f;
        if (f == 1)
        {
            cin >> tmp;
            deck.push_front(tmp);
        }
        if (f == 2)
        {
            cin >> tmp;
            deck.push_back(tmp);
        }
        if (f == 3)
        {
            if (deck.empty())
                cout << -1 << "\n";
            else
            {
                cout << deck.front() << "\n";
                deck.pop_front();
            }
        }
        if (f == 4)
        {
            if (deck.empty())
                cout << -1 << "\n";
            else
            {
                cout << deck.back() << "\n";
                deck.pop_back();
            }
        }
        if (f == 5)
        {
            cout << deck.size() << "\n";
        }
        if (f == 6)
        {
            if (deck.empty())
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        if (f == 7)
        {
            if (deck.empty())
                cout << -1 << "\n";
            else
                cout << deck.front() << "\n";
        }
        if (f == 8)
        {
            if (deck.empty())
                cout << -1 << "\n";
            else
                cout << deck.back() << "\n";
        }
    }

    return 0;
}