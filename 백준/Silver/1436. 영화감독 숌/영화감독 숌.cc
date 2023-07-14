#include <iostream>
using namespace std;

int main() {
    int n,temp,num=665;
    cin >> n;
    
    while(n!=0)
    {
        num++;
        temp = num;
        while(temp!=0)
        {
            if(temp%1000==666)
            {
                n--;
                break;
            }
            else
            {
                temp/=10;
            }
        }
    }
    
    cout << num;
    return 0;
}