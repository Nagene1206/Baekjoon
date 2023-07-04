#include <iostream>
using namespace std;

int main(){
    int chess[6] = {1,1,2,2,2,8};
    int n[6];
    
    cin >> n[0] >> n[1] >> n[2] >> n[3] >> n[4] >> n[5];
    
    for(int i=0;i<6;i++)
    {
        chess[i]-=n[i];
    }
        
    for(int i=0;i<6;i++)
    {
        cout << chess[i] << " ";
    }
    
    
    return 0;
}