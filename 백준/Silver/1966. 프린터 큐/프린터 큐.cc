#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

int main() {
    int t, n, index, impor, tmp, cnt = 0;
    std::queue<std::pair<int, int>> que;
    std::vector<int> important;

    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
        cnt = 0;

        std::cin >> n >> index;

        for (int j = 0; j < n; j++)
        {
            std::cin >> impor;
            que.push(std::pair<int,int>(impor,j));
            important.push_back(impor);
        }

        sort(important.rbegin(), important.rend());

        while (true)
        {
            if (que.front().first == important[0])
            {
                if (que.front().second == index)
                {
                    cnt++;
                    break;
                }
                else
                {
                    cnt++;
                    que.pop();
                    important.erase(important.begin());
                }
            }
            else
            {
                que.push(std::pair<int, int>(que.front().first, que.front().second));
                que.pop();
            }
        }

        while (que.size() != 0)
        {
            que.pop();
        }

        important.clear();

        std::cout << cnt << "\n";
    }

    return 0;
}