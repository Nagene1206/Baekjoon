#include <iostream>
using namespace std;

int main() {
    int n,tmp=1;
    cin >> n;
    
    int i=0;
    while(true)
    {
        tmp += 6*i;
        if(n<=tmp)
        {
           break; 
        }
        i++;
    }
    
    cout << i+1;
    return 0;
}