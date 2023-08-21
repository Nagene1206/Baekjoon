#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    
    for(int i=0;i<s.length();i++)
    {
        char tmp = s[i];
        for(int j=0;j<index;j++)
        {
            if(tmp == 'z')
                tmp = 'a';
            else
                tmp++;
            
            for(int k=0;k<skip.length();k++)
            {
                if(skip[k]==tmp)
                {
                    j--;
                    break;
                }
            }
        }
        answer += tmp;
    }
    
    return answer;
}