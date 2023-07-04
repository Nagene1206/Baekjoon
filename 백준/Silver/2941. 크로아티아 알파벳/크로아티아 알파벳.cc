#include <iostream>
using namespace std;

int main(){
    string str;
    int n=0;
    cin >> str;
    
    for(int i=0;i<str.length();i)
    {
        if(str[i]=='c')
        {
            if(str[i+1]=='='||str[i+1]=='-')
            {
                i+=2;
                n++;
            }
            else
            {
                i++;
                n++;
            }
        }
        else if(str[i]=='d')
        {
            if(str[i+1]=='z'&&str[i+2]=='=')
            {
                i+=3;
                n++;
            }
            else if(str[i+1]=='-')
            {
                i+=2;
                n++;
            }
            else
            {
                i++;
                n++;
            }
        }
        else if(str[i]=='l'&&str[i+1]=='j')
        {
            i+=2;
            n++;
        }
        else if(str[i]=='n'&&str[i+1]=='j')
        {
            i+=2;
            n++;
        }
        else if(str[i]=='s'&&str[i+1]=='=')
        {
            i+=2;
            n++;
        }
        else if(str[i]=='z'&&str[i+1]=='=')
        {
            i+=2;
            n++;
        }
        else
        {
            i++;
            n++;
        }
    }
    
    cout << n;
    return 0;
}