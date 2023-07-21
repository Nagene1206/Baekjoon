#include <iostream>
using namespace std;

int main() {
    int a,b,t,ans=1;
    cin >> t;

    for(int i=0;i<t;i++)
    {
        cin >> a >> b;
        
        for(int j=2;j<=a;j++)
        {
            if(a%j==0 && b%j==0)
            {
                ans *= j;
                a /= j;
                b /= j;
                j=1;
            }
        }
        
        cout << ans*a*b << endl;
        ans = 1;
    }
    
    return 0;
}