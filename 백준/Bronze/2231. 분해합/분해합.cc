#include <iostream>
using namespace std;

int main() {
    int n,min=0,sum;
    
    cin >> n;
    
    for(int i=0;i<n;i++)
    {
        sum = i;
        int unit = i;
        while(unit!=0)
        {
            sum += unit%10;
            unit /= 10;
        }

        if(sum == n)
        {
            min = i;
            break;
        }
    }
    
    cout << min;

    return 0;
}