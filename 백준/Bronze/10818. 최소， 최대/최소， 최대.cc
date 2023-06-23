#include <iostream>
using namespace std;

int main() {
    int N,min,max;
    cin >> N;
    
    int array[N];

    for(int i=0;i<N;i++)
        cin >> array[i];
    
    min = array[0];
    max = array[0];
    
    for(int j=0;j<N;j++)
    {
        if(min > array[j])
            min = array[j];
        if(max < array[j])
            max = array[j];
    }
    
    cout << min << " " << max;
    
    return 0;
}