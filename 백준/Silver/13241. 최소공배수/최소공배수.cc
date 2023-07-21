#include <iostream>
#include <algorithm>
using namespace std;

long long int gcd(long long int a, long long int b)
{
    if(a<b) swap(a,b);
    while(b!=0)
    {
        int remainder = a%b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    long long int a, b;
    cin >> a >> b;
    
    cout << a*b/gcd(a,b);
    return 0;
}