#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n, min, max;
    vector<int> num;
    int arr[8001] = { 0, };

    double sum=0;
    cin >> n;

    min = 4001;
    max = -4001;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        num.push_back(a);
        if (a < 0)
            arr[a * -1 + 4000]++;
        else
            arr[a]++;

        if (a > max)
            max = a;
        if (a < min)
            min = a;
    }

    for (int i = 0; i < num.size(); i++)
    {
        sum += num[i];
    }

    sort(num.begin(), num.end());

    int v_max = arr[0];
    int v_index = 0;

    for (int i = 1; i < 8002; i++)
    {
        if (v_max < arr[i])
        {
            v_max = arr[i];
            v_index = i;
        }
    }

    vector<int> v_arr;

    for (int i = 0; i < 8002; i++)
    {
        if (v_max == arr[i])
        {
            if (i <= 4000)
                v_arr.push_back(i);
            else
                v_arr.push_back((i - 4000) * (-1));
        }

    }

    sort(v_arr.begin(), v_arr.end());

    if (v_arr.size() == 1)
        v_index = v_arr[0];
    else
        v_index = v_arr[1];

    int average = round(sum / num.size());
    
    cout << average << "\n";
    cout << num[num.size() / 2] << "\n";
    cout << v_index << "\n";
    cout << max - min;

    return 0;
}