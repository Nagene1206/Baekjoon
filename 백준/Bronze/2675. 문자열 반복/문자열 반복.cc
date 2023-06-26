#include <iostream>
using namespace std;

int main() {
    int T,re;
    string str;
    
    cin >> T;
    for(int i=0;i<T;i++)
    {
        cin >> re >> str;
        for(int j=0;j<str.length();j++)
        {
            for(int k=0;k<re;k++)
                cout << str[j];
        }
        cout << endl;
    }
    
    return 0;
}