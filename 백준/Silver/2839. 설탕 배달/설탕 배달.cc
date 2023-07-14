#include <iostream>
using namespace std;

int main() {
    int n,fiv=0,thr=0;
    cin >> n;
    
    while(n>0)
    {
        if(n%5==0)
        {
            fiv = n/5;
            n%=5;
            break;
        }
        else
        {
            n -= 3;
            thr++;
        }
    }
    
    if(n==0)
        cout << fiv+thr;
    else
        cout << -1;

    
    return 0;
}