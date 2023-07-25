#include <iostream>
using namespace std;

int fac(int a)
{
    int result = 1;
    for(int i=a;i>0;i--)
        result *= i;
    return result;
}

int main(){
    int n,k;
    
    cin >> n >> k;
    
    cout << fac(n)/(fac(n-k)*fac(k));
    
    return 0;
}