#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> stack;
    int n, f, tmp;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> f;
        if (f == 1)
        {
            cin >> tmp;
            stack.push(tmp);
        }
        else if (f == 2)
        {
            if (stack.empty())
                cout << -1 << "\n";
            else
            {
                cout << stack.top() << "\n";
                stack.pop();
            }
        }
        else if (f == 3)
        {
            cout << stack.size() << "\n";
        }
        else if (f == 4)
        {
            if (stack.empty())
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        else
        {
            if (stack.empty())
                cout << -1 << "\n";
            else
                cout << stack.top() << "\n";
        }
    }
    
    return 0;
}