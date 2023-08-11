#include <iostream>
#include <vector>
using namespace std;

int n, cnt = 0;
int arr[16];
bool able;

void btrack(int depth)
{
    if (depth == n)
    {
        cnt++;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            arr[depth] = i;
            able = true;

            for (int j = 0; j < depth; j++)
            {
                if (arr[depth] == arr[j] || abs(depth - j) == abs(arr[depth] - arr[j]))
                {
                    able = false;
                    break;
                }
            }
            if (able)
                btrack(depth + 1);
        }
    } 
}

int main() 
{
    cin >> n;
    btrack(0);
    cout << cnt;
}