#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    bool minus = false;
    
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='+'||s[i]=='-')
        {
            if(s[i]=='-') minus = true;
        }
        else
        {
            answer *= 10;
            answer += s[i]-'0';
        }
    }
    
    if(minus) answer *= -1;
    
    return answer;
}