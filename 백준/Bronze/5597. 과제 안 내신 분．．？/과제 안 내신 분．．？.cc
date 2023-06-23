#include <iostream>
using namespace std;

int main() {
    bool array[31]={0,};
    int student;
    
    for(int i=1;i<=28;i++)
    {
        cin >> student;
        array[student] = 1;
    }
    
    for(int i=1;i<=30;i++)
    {
        if(array[i]==0)
            cout << i << endl;
    }
        
    return 0;
}