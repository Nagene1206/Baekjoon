#include <iostream>
using namespace std;

int main() {
    int t,max,min,tmp;
    
    max = -1;
    min = 1000001;
    
    cin >> t;
    
    for(int i=0;i<t;i++)
    {
        cin >> tmp;
        if(tmp>max)
            max = tmp;
        if(tmp<min)
            min = tmp;
    }
    
    cout << max*min;
    return 0;
}