#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n, num;
    string str;

    cin >> n;

    stack<int> stack;

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str == "push")
        {
            cin >> num;
            stack.push(num);
        }
        if (str == "pop")
        {
            if (stack.empty())
                cout << -1 << "\n";
            else
            {
                cout << stack.top() << "\n";
                stack.pop();
            }
        }

        if (str == "size")
            cout << stack.size() << "\n";
        if (str == "empty")
        {
            if (stack.empty())
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        if (str == "top")
        {
            if (stack.empty())
                cout << -1 << "\n";
            else
                cout << stack.top() << "\n";
        }
    }

    return 0;
}