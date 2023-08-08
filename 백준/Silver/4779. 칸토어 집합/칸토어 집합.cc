#include <iostream>
#include <cmath>
using namespace std;

void canto(int n)
{
    if (n == 0)
    {
        cout << "-";
    }
    else
    {
        canto(n - 1);
        for (int i = 0; i < pow(3, n - 1); i++)
            cout << " ";
        canto(n - 1);
    }
}

int main() 
{
    int n;

    while (cin >> n)
    {
        canto(n);
        cout << "\n";
    }
}