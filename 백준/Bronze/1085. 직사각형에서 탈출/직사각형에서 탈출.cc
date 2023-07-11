#include <iostream>
using namespace std;

int main() {
    int x,y,w,h;
    
    cin >> x >> y >> w >> h;
    
    if(x>w/2&&y>h/2)
    {
        if(w-x>h-y)
            cout << h-y;
        else
            cout << w-x;
    }
    else if(x>w/2&&y<=h/2)
    {
        if(w-x>y)
            cout << y;
        else
            cout << w-x;
    }
    else if(x<=w/2&&y>h/2)
    {
        if(x>h-y)
            cout << h-y;
        else
            cout << x;
    }
    else if(x<=w/2&&y<=h/2)
    {
        if(x>y)
            cout << y;
        else
            cout << x;
    }
    
    return 0;
}