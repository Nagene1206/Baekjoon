#include <string>
#include <vector>

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    
    vector<int> score;
    
    int idx = 0;
    int lv = 0;
    
    for(;idx<dartResult.length();)
    {
        if(dartResult[idx]>='0' && dartResult[idx]<='9')
        {
            if(dartResult[idx]=='1'&&dartResult[idx+1]=='0')
            {
                score.push_back(10);
                idx += 2;
            }
            else
            {
                score.push_back(dartResult[idx]-'0');
                idx++;
            }
        }
        else if(dartResult[idx]=='S'||dartResult[idx]=='D'||dartResult[idx]=='T')
        {
            if(dartResult[idx]=='D')
                score[lv] = score[lv]*score[lv];
            else if(dartResult[idx]=='T')
                score[lv] = score[lv]*score[lv]*score[lv];
            
            if(dartResult[idx+1]=='*'||dartResult[idx+1]=='#')
            {
                if(dartResult[idx+1]=='*')
                {
                    if(lv==0)
                    {
                        score[0] = score[0]*2;
                    }
                    else
                    {
                        score[lv] = score[lv]*2;
                        score[lv-1] = score[lv-1]*2;
                    }
                }
                else
                {
                    score[lv] = score[lv]*(-1);
                }
                idx++;
            }
            
            idx++;
            lv++;
        }
    }
    
    answer += score[0]+score[1]+score[2];
    
    return answer;
}