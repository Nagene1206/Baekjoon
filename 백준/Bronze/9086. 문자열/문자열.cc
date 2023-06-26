#include <iostream>
using namespace std;

int main() {
    string str;
    int T;
    
    cin >> T;
    
    for(int i=0;i<T;i++)
    {
        cin >> str;
        cout << str[0] << str[str.length()-1] << endl;
    }
    
    return 0;
}