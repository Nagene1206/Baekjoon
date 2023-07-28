#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string str = " ";

    stack<char> stack;

    getline(cin, str);

    while (str != ".")
    {
        for (int j = 0; j < str.length(); j++)
        {
            if (str[j] == '(')
            {
                stack.push('(');
            }
            else if (str[j] == '[')
            {
                stack.push('[');
            }
            else if (str[j] == ')')
            {
                if (stack.size() != 0)
                {
                    if (stack.top() == '(')
                    {
                        stack.pop();
                    }
                    else
                    {
                        cout << "no" << "\n";
                        break;
                    }
                }
                else
                {
                    cout << "no" << "\n";
                    break;
                }
            }
            else if (str[j] == ']')
            {
                if (stack.size() != 0)
                {
                    if (stack.top() == '[')
                    {
                        stack.pop();
                    }
                    else
                    {
                        cout << "no" << "\n";
                        break;
                    }
                }
                else
                {
                    cout << "no" << "\n";
                    break;
                }
            }

            if (j == str.length() - 1)
            {
                if (stack.size() == 0)
                    cout << "yes" << "\n";
                else
                    cout << "no" << "\n";
            }
        }

        while (stack.size() != 0)
            stack.pop();

        getline(cin, str);
    }

    return 0;
}