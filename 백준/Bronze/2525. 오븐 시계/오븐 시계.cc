#include <iostream>
using namespace std;

int main() {
    int A,B,C;
    cin >> A >> B;
    cin >> C;
    
    if(B+C<60)
        cout << A << " " << B+C;
    else
    {
        if(A+((B+C)/60)>=24)
            cout << A+((B+C)/60)-24 << " " << (B+C)%60;
        else
            cout << A+((B+C)/60) << " " << (B+C)%60;
    }
    
    return 0;
}