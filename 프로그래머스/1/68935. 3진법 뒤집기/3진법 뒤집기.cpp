#include <string>
#include <vector>
#include <math.h>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    string num = "";
    
    for(int i=n;i>0;)
    {
        num = to_string(i%3) + num;
        i/=3;
    }
    
    for(int i=0;i<num.length();i++)
    {
        answer += (num[i]-'0')*pow(3,i);
    }
    
    return answer;
}