#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    string str;

    cin >> n;

    stack<char> stack;

    for (int i = 0; i < n; i++)
    {
        cin >> str;

        for (int j = 0; j < str.length(); j++)
        {
            if (str[j] == '(')
            {
                stack.push('(');
            }
            else
            {
                if (stack.size() == 0)
                {
                    cout << "NO" << "\n";
                    break;
                }
                else
                {
                    stack.pop();
                }
            }

            if (j == str.length() - 1)
            {
                if (stack.size() == 0)
                    cout << "YES" << "\n";
                else
                    cout << "NO" << "\n";
            }
        }

        while (stack.size() != 0)
            stack.pop();
    }

    return 0;
}