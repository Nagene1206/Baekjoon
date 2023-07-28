#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n, num, sum = 0;

    cin >> n;

    stack<int> stack;

    for (int i = 0; i < n; i++)
    {
        cin >> num;

        if (num != 0)
            stack.push(num);
        else
            stack.pop();
    }

    int size = stack.size();

    for (int i = 0; i < size; i++)
    {
        sum += stack.top();
        stack.pop();
    }

    cout << sum;

    return 0;
}