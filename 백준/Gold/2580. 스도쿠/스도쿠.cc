#include <iostream>
#include <vector>
using namespace std;

int arr[9][9];
bool able = false;
vector<pair<int, int>> check;

bool check_arr(pair<int,int> check)
{
    int x = check.first/3;
    int y = check.second/3;

    for (int i=0;i<9;i++)
    {
        if (arr[check.first][check.second] == arr[check.first][i] && i != check.second)
            return false;
        if (arr[check.first][check.second] == arr[i][check.second] && i != check.first)
            return false;
    }
    for (int i = 3 * x; i < 3 * x + 3; i++)
    {
        for (int j = 3 * y; j < 3 * y + 3; j++)
        {
            if (arr[i][j] == arr[check.first][check.second] && (i != check.first && j != check.second))
            {
                return false;
            }
        }
    }
    return true;
}

void sdk(int depth)
{
    if (depth == check.size())
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << "\n";
        }
        able = true;
        return;
    }
    for (int i = 1; i <= 9; i++)
    {
        arr[check[depth].first][check[depth].second] = i;
        if (check_arr(check[depth]))
            sdk(depth + 1);
        if (able)
            return;
    }
    arr[check[depth].first][check[depth].second] = 0;
}

int main() 
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 0)
                check.push_back(make_pair(i, j));
        }
    }
    sdk(0);
}