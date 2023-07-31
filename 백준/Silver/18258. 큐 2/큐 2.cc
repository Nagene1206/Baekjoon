#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    queue<int> que;
    int n, tmp;
    string str;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str == "push")
        {
            cin >> tmp;
            que.push(tmp);
        }
        if (str == "pop")
        {
            if (que.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << que.front() << "\n";
                que.pop();
            }
        }
        if (str == "size")
        {
            cout << que.size() << "\n";
        }
        if (str == "empty")
        {
            if (que.empty())
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        if (str == "front")
        {
            if (que.empty())
                cout << -1 << "\n";
            else
                cout << que.front() << "\n";
        }
        if (str == "back")
        {
            if (que.empty())
                cout << -1 << "\n";
            else
                cout << que.back() << "\n";
        }
    }

    return 0;
}