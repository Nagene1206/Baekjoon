#include <iostream>
using namespace std;

int main() {
    int N,B;
    string str;
    
    cin >> N >> B;
    
    while(N!=0)
    {
        int temp = N%B;
        if(temp > 9)
        {
            temp = temp -10 +'A';
            str += temp;
        }
        else
        {
            str += temp + '0';
        }
        N/=B;
    }
    
    for(int i=0;i<str.length();i++)
    {
        cout << str[str.length()-(1+i)];
    }
    
    return 0;
}