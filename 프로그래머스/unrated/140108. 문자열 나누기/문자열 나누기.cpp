#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    int cnt1=0, cnt2=0;
    char x;
    
    for(int i=0;i<s.length();i++)
    {
        if(cnt1==0)
        {
            x = s[i];
            cnt1++;
        }
        else
        {
            if(x==s[i])
                cnt1++;
            else
                cnt2++;
        }
        
        if(cnt1==cnt2)
        {
            answer++;
            cnt1=0;
            cnt2=0;
        }
    }
    
    if(cnt1 != cnt2)
        answer++;
    
    return answer;
}