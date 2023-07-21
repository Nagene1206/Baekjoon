#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
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
    int a,b,c,d;
    
    cin >> a >> b;
    cin >> c >> d;
    
    a = a*d+b*c;
    b = b*d;
    
    cout << a/gcd(a,b) << " " << b/gcd(a,b);
    return 0;
}