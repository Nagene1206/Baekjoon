#include <iostream>
using namespace std;

int main() {
    int T,C,Q,D,N,P;
    
    cin >> T;
    
    for(int i=0;i<T;i++)
    {
        cin >> C;
        
        Q=C/25;
        C%=25;
        D=C/10;
        C%=10;
        N=C/5;
        C%=5;
        P=C/1;
        
        cout << Q << " " << D << " " << N << " " << P << endl;
    }
    return 0;
}