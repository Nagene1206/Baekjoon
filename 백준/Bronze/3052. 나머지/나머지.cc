#include <iostream>
using namespace std;

int main() {
    int array[42]={0,};
    
    int a,result=0;
    
    for(int i=0;i<10;i++)
    {
        cin >> a;
        array[a%42]++;
    }
    
    for(int i=0;i<42;i++)
    {
        if(array[i]>=1)
            result++;
    }
    
    cout << result;
    
    return 0;
}