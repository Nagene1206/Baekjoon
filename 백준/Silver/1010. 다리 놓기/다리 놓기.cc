#include <iostream>
using namespace std;

int main(){
    int n,m,t;
    
    cin >> t;
    
    for(int i=0;i<t;i++)
    {
        int result = 1;
        cin >> n >> m;
        for(int j=0;j<n;j++)
        {
            result = result*(m-j)/(1+j);
        }
        cout << result << "\n";
    }
    
    return 0;
}