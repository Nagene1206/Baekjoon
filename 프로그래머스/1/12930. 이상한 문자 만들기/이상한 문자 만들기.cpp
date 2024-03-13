#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    bool state = true;  //true = 짝수, false = 홀수
    
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            state = true;
            answer.push_back(s[i]);
        }
        else
        {
            if(s[i]>91&&state)  //소문자 짝수
            {
                answer.push_back(s[i]-32);
                state = false;
            }
            else if(s[i]<91&&state) //대문자 짝수
            {
                answer.push_back(s[i]);
                state = false;
            }
            else if(s[i]>91&&!state)    //소문자 홀수
            {
                answer.push_back(s[i]);
                state = true;
            }
            else if(s[i]<91&&!state)    //대문자 홀수
            {
                answer.push_back(s[i]+32);
                state = true;
            }
        }
    }
    
    return answer;
}