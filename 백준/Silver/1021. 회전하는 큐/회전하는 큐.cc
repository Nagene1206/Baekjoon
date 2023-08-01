#include <iostream>
#include <deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    deque<int> deck;
    int n, m, num, cnt = 0;

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        deck.push_back(i);

    for (int i = 0; i < m; i++)
    {
        cin >> num;

        int left = 0;
        int right = 0;

        for (int j = 0; j < deck.size(); j++)
        {
            if (deck[j] == num)
            {
                left = j;
                right = deck.size() - j;
                break;
            }
        }

        if (left <= right)
        {
            while (true)
            {
                if (deck.front() == num)
                    break;
                deck.push_back(deck.front());
                deck.pop_front();
                
                cnt++;
            }

            deck.pop_front();
        }
        else
        {
            cnt++;
            while (true)
            {
                if (deck.back() == num)
                    break;
                deck.push_front(deck.back());
                deck.pop_back();
                cnt++;
            }

            deck.pop_back();
        }
    }

    cout << cnt;

    return 0;
}