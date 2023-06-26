#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int n=1;
    
    getline(cin, str);
    
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')
            n++;
    }
    
    if(str[0]== ' ')
        n--;
    if(str[str.length()-1]==' ')
        n--;
    if(str==""||str==" ")
        n=0;
    
    cout << n;
    
    return 0;
}