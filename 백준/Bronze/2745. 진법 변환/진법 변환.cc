#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string N;
    int B,sum=0;
    
    cin >> N >> B;
    
    for(int i=0;i<N.length();i++)
    {
        int tmp = N[N.length()-(i+1)];
        if(tmp>='0'&&tmp<='9')
            tmp = tmp-'0';
        else
            tmp = tmp-'A'+10;
        
        sum += (tmp*(int)pow(B,i));
    }
    
    cout << sum;
    
    return 0;
}