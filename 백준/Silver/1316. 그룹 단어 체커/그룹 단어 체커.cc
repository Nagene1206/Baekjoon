#include <iostream>
using namespace std;

int main(){
    int n,group=0;
    bool result;
    string str;
    
    cin >> n;
    for(int i=0;i<n;i++)
    {
        result = true;
        cin >> str;
        for(int j=0;j<str.length();j++)
        {
            for(int k=0; k<j; k++)
            {
                if(str[j]!=str[j-1]&&str[j]==str[k])
                {
                    result = false;
                    break;
                }
            }
        }
        
        if(result) group++;
    }
    
    cout << group;
    return 0;
}