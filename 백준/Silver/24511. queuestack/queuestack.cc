#include <iostream>
#include <deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    deque<int> num;
    bool num_type[100000];

    int n, m, tmp;

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> num_type[i];

    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (num_type[i] == 0)
            num.push_back(tmp);
    }

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> tmp;
        
        num.push_front(tmp);
        tmp = num.back();
        num.pop_back();

        cout << tmp << " ";
    }

    return 0;
}