#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
    if (a < b) swap(a, b);
    while (b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

vector<int> arr;
vector<int> dis;

int main() {
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 1; i++)
        dis.push_back(arr[i + 1] - arr[i]);

    int div;

    for (int i = 0; i < n - 1; i++)
    {
        if (i == 0)
            div = dis[0];
        else
            div = gcd(div, dis[i]);
    }

    cout << (arr[n - 1] - arr[0]) / div - n + 1;

    return 0;
}