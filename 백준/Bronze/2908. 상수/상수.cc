#include <iostream>
using namespace std;

int main() {
    string str1,str2;
    int a,b;
    
    cin >> str1 >> str2;
    
    a = ((int)str1[0]-'0')+((int)str1[1]-'0')*10+((int)str1[2]-'0')*100;
    b = ((int)str2[0]-'0')+((int)str2[1]-'0')*10+((int)str2[2]-'0')*100;
    
    if(a>b)
        cout << a;
    else
        cout << b;
    
    return 0;
}