#include <iostream>
using namespace std;

int main() {
    string str;
    int abc[26];
    
    for(int i=0;i<26;i++)
        abc[i]=-1;
    
    cin >> str;
    
    for(int i=0;i<str.length();i++)
    {
        if(abc[(int)str[i]-97]==-1)
        {
            abc[(int)str[i]-97]=i;
        }
    }
    for(int i=0;i<26;i++)
    {
        cout << abc[i] << " ";
    }
    
    return 0;
}