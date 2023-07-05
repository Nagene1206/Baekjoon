#include <iostream>
using namespace std;

int main() {
    int arr[9][9];
    int max=0,ind_x=0,ind_y=0;
    
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            cin >> arr[i][j];
            if(max<arr[i][j])
            {
                max = arr[i][j];
                ind_x = i;
                ind_y = j;
            }
        }
    }
    
    cout << max << endl << ind_x+1 << " " << ind_y+1;
    
    return 0;
}