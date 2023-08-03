#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> stack;
    vector<int> vec;
    
    int n, tmp, person = 1;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        vec.push_back(tmp);
    }

    while (true)
    {
        if (vec.size() != 0)
        {
            if (vec[0] == person)
            {
                person++;
                vec.erase(vec.begin());
            }
            else if (!stack.empty())
            {
                if (stack.top() == person)
                {
                    person++;
                    stack.pop();
                }
                else
                {
                    stack.push(vec[0]);
                    vec.erase(vec.begin());
                }
            }
            else
            {
                stack.push(vec[0]);
                vec.erase(vec.begin());
            }
        }
        else
        {
            if (person == stack.top())
            {
                person++;
                stack.pop();
            }
            else
                break;
        }
        if (person-1 == n)
            break;
    }

    if (stack.empty()&&person-1 == n)
        cout << "Nice";
    else
        cout << "Sad";

    return 0;
}