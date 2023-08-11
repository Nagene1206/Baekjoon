#include <iostream>
using namespace std;

int n, m;
int arr[9];
bool visited[9];

void btrack(int depth, int j)
{
    if (depth == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";

        return;
    }
    for (j; j <= n; j++)
    {
        if (!visited[j])
        {
            visited[j] = true;
            arr[depth] = j;
            btrack(depth + 1,j);
            visited[j] = false;
        }
    }
}

int main() 
{
    cin >> n >> m;
    btrack(0,1);
}