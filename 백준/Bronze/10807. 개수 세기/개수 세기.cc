#include <iostream>
using namespace std;

int main() {
    int N,V,result=0;
    cin >> N;
    
    int array[N];
    
    for(int i=0;i<N;i++)
        cin >> array[i];
    
    cin >> V;
    
    for(int j=0;j<N;j++)
    {
        if(V==array[j])
            result++;
    }
    
    cout << result;
    
    return 0;
}