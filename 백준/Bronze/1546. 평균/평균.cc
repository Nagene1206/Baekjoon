#include <iostream>
using namespace std;

int main() {
    int m, max;
    float sum=0;
    cin >> m;
    
    float arr[m]={0.0,};
    max = arr[0];
    
    for(int i=0;i<m;i++)
    {
        cin >> arr[i];
        if(max<arr[i])
            max=arr[i];
    }
    
    for(int i=0;i<m;i++)
    {
        arr[i]=arr[i]/max*100;
        sum += arr[i];
    }
    
    cout << sum/m;
    
    return 0;
}