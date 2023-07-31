#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    queue<int> que;
    vector<int> vec;
    int n, k, tmp;

    cin >> n >> k;

    for (int i = 1; i <= n; i++)
        que.push(i);

    while (que.size() != 1)
    {
        for (int i = 0; i < k-1; i++)
        {
            tmp = que.front();
            que.pop();
            que.push(tmp);
        }
        vec.push_back(que.front());
        que.pop();
    }

    vec.push_back(que.front());

    cout << "<";

    for (int i = 0; i < vec.size(); i++)
    {
        if (i == 0)
            cout << vec[i];
        else
            cout << ", " << vec[i];
    }

    cout << ">";

    return 0;
}