#include <iostream>
using namespace std;

long long fivo(int n)
{
    if (n == 1)
        return 1;
    if (n == 0)
        return 0;

    return fivo(n-1)+fivo(n-2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    cout << fivo(n);
    
    return 0;
}