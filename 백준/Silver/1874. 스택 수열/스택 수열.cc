#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main() {
    int num,n;
    int index = 0;

    vector<int> vec;
    stack<int> n_stack;
    vector<char> vec_r;

    cin >> num;

    for(int i = 1; i <= num; i++)
    {
        cin >> n;
        vec.push_back(n);
    }

    for (int i = 1; i <= num;i)
    {
        if (vec[index] == i)
        {
            vec_r.push_back('+');
            vec_r.push_back('-');
            index++;
            if (i < num)
                i++;
        }
        else if(n_stack.size() != 0)
        {
            if (n_stack.top() == vec[index])
            {
                vec_r.push_back('-');
                n_stack.pop();
                index++;
            }
            else
            {
                n_stack.push(i);
                vec_r.push_back('+');
                ++i;
            }
        }
        else
        {
            n_stack.push(i);
            vec_r.push_back('+');
            ++i;
        }

        if (index == num)
            break;
    }

    if (n_stack.size() != 0 && index != num-1)
    {
        cout << "NO";
    }
    else
    {
        for (int i = 0; i < vec_r.size(); i++)
            cout << vec_r[i] << "\n";
    }


    return 0;
}