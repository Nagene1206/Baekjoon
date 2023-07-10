#include <iostream>
using namespace std;

int main() {
    int num, index, sum = 0;
    int arr[100000] = {0,};
    
    while(true)
    {
        cin >> num;
        if(num==-1)
            break;
        index = 0;
        sum = 0;
        
        for(int i=1;i<num;i++)
        {
            if(num%i==0)
            {
                arr[index]=i;
                sum += i;
                index++;
            }
        }
        
        if(sum == num)
        {
            cout << num << " = ";
            for(int i=0;i<index-1;i++)
            {
                cout << arr[i] << " + ";
                arr[i]=0;
            }
            cout << arr[index-1] << endl;
            arr[index-1]=0;
        }
        else
        {
            cout << num << " is NOT perfect." << endl;
        }
    }
    
    return 0;
}