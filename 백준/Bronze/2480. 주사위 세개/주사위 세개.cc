#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A,B,C;
    cin >> A >> B >> C;
    
    if(A==B && B==C)
    {
        cout << 10000+A*1000;
    }
    else if(A==B||C==A)
    {
        cout << 1000+A*100;
    }
    else if(B==C)
    {
        cout << 1000+B*100;
    }
    else
    {
        cout << max({A,B,C})*100;
    }
    
    return 0;
}