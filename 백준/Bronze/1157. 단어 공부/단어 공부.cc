#include <iostream>
using namespace std;

int main(){
    int alphabet[26]={0,};
    string str;
    int max=0,max_index=0,count=0;
    
    cin >> str;
    
    for(int i=0;i<str.length();i++)
    {
        if(str[i]<97) alphabet[str[i]-65]++;
        else alphabet[str[i]-97]++;
    }
    
    for(int i=0; i<26; i++)
    {
        if(alphabet[i]>max)
        {
            max=alphabet[i];
            max_index=i;
        }
    }
    
    for(int i=0;i<26;i++)
    {
        if(alphabet[i]==max) count++;
    }
    
    if(count>1) cout << "?";
    else cout << (char)(max_index+65);
    return 0;
}