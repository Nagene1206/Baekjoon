#include <iostream>
using namespace std;

int main() {
    int n,p=0,mea=0;
    cin >> n;
    
    int arr[n]={0,};
    
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        for(int j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                mea++;
            }
        }
        if(mea == 2)
            p++;
        mea = 0;
    }

    cout << p;
    
    return 0;
}