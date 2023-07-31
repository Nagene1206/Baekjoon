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

    for (int i = 1; i <= n; i++)
        que.push(i);

    for (int i = 1; i < n; i++)
    {
        que.pop();
        tmp = que.front();
        que.pop();
        que.push(tmp);
    }

    cout << que.front();
    return 0;
}