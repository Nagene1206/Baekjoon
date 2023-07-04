#include <iostream>
using namespace std;

int main(){
    string str;
    bool result = true;
    cin >> str;
    
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!=str[str.length()-i-1])
            result = false;
    }
    
    if(result == false)
        cout << "0";
    else
        cout << "1";
    
    return 0;
}