#include <iostream>
using namespace std;

int main() {
    int N,X;
    
    cin >> N >> X;
    
    int array[N];
    
    for(int i=0;i<N;i++)
        cin >> array[i];
    
    for(int j=0;j<N;j++)
    {
        if(X>array[j])
            cout << array[j] << " ";
    }

    return 0;
}