#include <iostream>
using namespace std;

int main() {
    int x_min=10001,x_max=-10001,y_min=10001,y_max=-10001;
    
    int n,x,y;
    cin >> n;
    
    for(int i=0;i<n;i++)
    {
        cin >> x >> y;
        if(x_min>x)
            x_min=x;
        if(y_min>y)
            y_min=y;
        if(x_max<x)
            x_max=x;
        if(y_max<y)
            y_max=y;
    }
    
    cout << (x_max-x_min)*(y_max-y_min);
    
    return 0;
}