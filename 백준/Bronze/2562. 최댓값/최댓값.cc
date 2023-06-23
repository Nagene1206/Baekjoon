#include <iostream>
using namespace std;

int main() {
    int max, answer;
    int array[9];
    
    for(int i=0;i<9;i++)
        cin >> array[i];
    
    max=array[0];
    answer = 1;
    
    for(int j=0;j<9;j++)
    {
        if(max<array[j])
        {
            max = array[j];
            answer = j+1;
        }
    }
    
    cout << max << endl << answer;
    
    return 0;
}