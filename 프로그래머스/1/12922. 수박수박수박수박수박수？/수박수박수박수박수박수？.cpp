#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    bool su = true;
    
    for(int i=0;i<n;i++)
    {
        if(su) answer += "수";
        else answer += "박";
        
        su = !su;
    }
    return answer;
}