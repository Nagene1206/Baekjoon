#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    
    if(s.length()!=4 && s.length()!=6)
        return false;
    
    for(int i=0;i<s.length();i++)
    {
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
        {
            answer = false;
            break;
        }
        if(i>5)
        {
            answer = false;
            break;
        }
    }
        
    return answer;
}