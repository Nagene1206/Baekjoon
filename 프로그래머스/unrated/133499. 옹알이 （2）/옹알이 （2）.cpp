#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    string str;
    string before;
    
    for(int i=0;i<babbling.size();i++)
    {
        str = babbling[i];
        while(true)
        {
            if(str.substr(0,3)=="aya" && before != "aya")
            {
                str.erase(0,3);
                before = "aya";
            }
            else if(str.substr(0,2)=="ye" && before != "ye")
            {
                str.erase(0,2);
                before = "ye";
            }
            else if(str.substr(0,3)=="woo" && before != "woo")
            {
                str.erase(0,3);
                before = "woo";
            }
            else if(str.substr(0,2)=="ma" && before != "ma")
            {
                str.erase(0,2);
                before = "ma";
            }
            else if(str=="")
            {
                answer++;
                break;
            }
            else
                break;
        }
        before = "";
    }
    
    return answer;
}