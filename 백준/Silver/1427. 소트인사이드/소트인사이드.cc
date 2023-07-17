#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;
    
    int num = stoi(str);
    int n[str.length()];
    
    for(int i=0;i<str.length();i++)
    {
        n[i]=num%10;
        num/=10;
    }
    
    sort(n,n+str.length(),greater<int>());
    
    for(int i=0;i<str.length();i++)
        cout << n[i];
    
    return 0;
}