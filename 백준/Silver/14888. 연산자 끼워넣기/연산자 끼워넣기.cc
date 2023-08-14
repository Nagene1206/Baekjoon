#include <iostream>
using namespace std;

int n;
int arr[11];
int ope[4];
int mini = 1000000001;
int maxi = -1000000001;

void cal(int value, int index)
{
    if (index == n)
    {
        if (mini > value)
            mini = value;
        if (maxi < value)
            maxi = value;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        if (ope[i] > 0)
        {
            ope[i]--;
            if (i == 0)
            {
                cal(value + arr[index], index + 1);
            }
            else if (i == 1)
            {
                cal(value - arr[index], index + 1);
            }
            else if (i == 2)
            {
                cal(value * arr[index], index + 1);
            }
            else if (i == 3)
            {
                cal(value / arr[index], index + 1);
            }
            ope[i]++;
        }
    }
}

int main() 
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 4; i++)
    {
        cin >> ope[i];
    }
    cal(arr[0], 1);
    cout << maxi << "\n" << mini;
}