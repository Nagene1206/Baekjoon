#include <iostream>
using namespace std;

int main() {
    int n,m,max=0;
    int arr[100] = {0,};
    
    cin >> n >> m;
    
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    for(int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(arr[i]+arr[j]+arr[k]<=m)
                {
                    if(max < arr[i]+arr[j]+arr[k])
                    max = arr[i]+arr[j]+arr[k];
                }
            }
        }
    }
    
    cout << max;
}