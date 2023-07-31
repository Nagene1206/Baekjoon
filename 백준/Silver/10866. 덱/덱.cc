#include <iostream>
#include <deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    deque<int> deck;
    int n, tmp;
    string str;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str == "push_front")
        {
            cin >> tmp;
            deck.push_front(tmp);
        }
        if (str == "push_back")
        {
            cin >> tmp;
            deck.push_back(tmp);
        }
        if (str == "pop_front")
        {
            if (deck.empty())
                cout << -1 << "\n";
            else
            {
                cout << deck.front() << "\n";
                deck.pop_front();
            }
        }
        if (str == "pop_back")
        {
            if (deck.empty())
                cout << -1 << "\n";
            else
            {
                cout << deck.back() << "\n";
                deck.pop_back();
            }
        }
        if (str == "size")
        {
            cout << deck.size() << "\n";
        }
        if (str == "empty")
        {
            if (deck.empty())
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        if (str == "front")
        {
            if (deck.empty())
                cout << -1 << "\n";
            else
                cout << deck.front() << "\n";
        }
        if (str == "back")
        {
            if (deck.empty())
                cout << -1 << "\n";
            else
                cout << deck.back() << "\n";
        }
    }

    return 0;
}