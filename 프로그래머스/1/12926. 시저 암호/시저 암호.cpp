#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ') answer.push_back(' ');
        else if(s[i]>='A'&&s[i]<='Z')
        {
            if(s[i]+(n%26)>'Z')
            {
                answer.push_back(s[i]+(n%26)-'Z'+'A'-1);
            }
            else answer.push_back(s[i]+(n%26));
        }
        else if(s[i]>='a'&&s[i]<='z')
        {
            if(s[i]+(n%26)>'z')
            {
                answer.push_back(s[i]+(n%26)-'z'+'a'-1);
            }
            else answer.push_back(s[i]+(n%26));
        }
    }
    
    return answer;
}