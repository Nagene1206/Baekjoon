#include <iostream>
using namespace std;

int main(){
    long long n,sum=1;
    
    cin >> n;
    
    if(n==0)
        cout << 1;
    else
    {
        for(long long i=n;i>0;i--)
        {
            sum*=i;
        }
        cout << sum;
    }
    
    return 0;
}